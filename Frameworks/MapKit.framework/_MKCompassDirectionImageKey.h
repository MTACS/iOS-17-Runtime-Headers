
@interface _MKCompassDirectionImageKey : NSObject <NSCopying> {
    long long  _compassViewStyle;
    NSString * _headingString;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) long long compassViewStyle;
@property (nonatomic, readonly) NSString *headingString;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (long long)compassViewStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)headingString;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 headingString:(id)arg2 compassViewStyle:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
