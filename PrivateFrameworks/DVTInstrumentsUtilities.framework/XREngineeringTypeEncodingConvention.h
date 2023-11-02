
@interface XREngineeringTypeEncodingConvention : NSObject {
    long long  _bitWidth;
    int  _sentinel;
}

@property (nonatomic) long long bitWidth;
@property (nonatomic) int sentinel;

- (long long)bitWidth;
- (id)init;
- (int)sentinel;
- (void)setBitWidth:(long long)arg1;
- (void)setSentinel:(int)arg1;

@end
