
@interface MDARSession : NSObject

+ (bool)isSupported;
+ (id)newGeoTrackingSession;
+ (id)newPositionalTrackingSession;
+ (id)stringWithARGeoTrackingAccuracy:(long long)arg1;
+ (id)stringWithARGeoTrackingState:(long long)arg1;
+ (id)stringWithARGeoTrackingStateReason:(long long)arg1;
+ (id)stringWithARTrackingState:(long long)arg1;
+ (id)stringWithARTrackingStateReason:(long long)arg1;

@end
