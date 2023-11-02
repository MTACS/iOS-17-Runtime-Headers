
@interface CARStreamInfo : NSObject {
    NSString * _identifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    long long  _zIndex;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic, readonly) long long zIndex;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStreamInfoDictionary:(id)arg1;
- (struct CGPoint { double x1; double x2; })origin;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (long long)zIndex;

@end
