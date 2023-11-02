
@interface VSImageElementHelper : NSObject {
    long long  _currentUserInterfaceStyle;
    double  _deviceScale;
}

@property (nonatomic) long long currentUserInterfaceStyle;
@property (nonatomic) double deviceScale;

- (id)bestMatchingKeyForScale:(double)arg1 withSuffix:(id)arg2 inKeysSet:(id)arg3;
- (id)bestMatchingKeyForSrcset:(id)arg1;
- (long long)currentUserInterfaceStyle;
- (double)deviceScale;
- (id)init;
- (id)keysForScale:(double)arg1 withSuffix:(id)arg2;
- (id)matchingKeyForScale:(double)arg1 withSuffix:(id)arg2 inKeysSet:(id)arg3;
- (void)setCurrentUserInterfaceStyle:(long long)arg1;
- (void)setDeviceScale:(double)arg1;

@end
