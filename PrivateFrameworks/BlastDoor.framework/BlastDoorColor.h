
@interface BlastDoorColor : NSObject {
    void color;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double red;

- (double)alpha;
- (double)blue;
- (id)description;
- (double)green;
- (id)init;
- (double)red;

@end
