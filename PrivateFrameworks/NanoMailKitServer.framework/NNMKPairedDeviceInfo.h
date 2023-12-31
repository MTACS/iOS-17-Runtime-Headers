
@interface NNMKPairedDeviceInfo : NSObject {
    double  _screenScale;
    double  _screenWidth;
}

@property (nonatomic) double screenScale;
@property (nonatomic) double screenWidth;

+ (id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2;

- (double)screenScale;
- (double)screenWidth;
- (void)setScreenScale:(double)arg1;
- (void)setScreenWidth:(double)arg1;

@end
