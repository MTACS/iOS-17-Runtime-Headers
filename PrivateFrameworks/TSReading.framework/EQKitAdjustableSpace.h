
@interface EQKitAdjustableSpace : NSObject {
    double  mAscent;
    double  mDescent;
    double  mWidth;
}

@property (nonatomic, readonly) double ascent;
@property (nonatomic, readonly) double descent;
@property (nonatomic, readonly) double width;

+ (void)appendSpaceToAttributedString:(id)arg1 ascent:(double)arg2 descent:(double)arg3 width:(double)arg4;
+ (struct __CTRunDelegate { }*)newRunDelegateWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3;

- (double)ascent;
- (double)descent;
- (id)initWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3;
- (double)width;

@end
