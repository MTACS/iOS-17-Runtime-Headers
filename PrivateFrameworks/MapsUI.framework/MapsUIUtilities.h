
@interface MapsUIUtilities : NSObject

+ (id)bundleIdentifierForContext:(unsigned long long)arg1;
+ (void)checkDeviceLockStatusWithCompletion:(id /* block */)arg1;
+ (bool)deviceIsLockedAndNeedsPasscode;
+ (bool)isDataDetectorsProcess;
+ (bool)isInApplicationContext:(unsigned long long)arg1;
+ (bool)isMapsProcess;
+ (bool)isParsecProcess;
+ (bool)isSafariProcess;
+ (bool)isSiriProcess;
+ (bool)isSpotlightProcess;
+ (void)performOnMainIfNecessary:(id /* block */)arg1;
+ (void)resizeImageIfNeeded:(id)arg1 toFrameSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 completion:(id /* block */)arg4;

@end
