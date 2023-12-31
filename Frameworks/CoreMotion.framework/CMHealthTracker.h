
@interface CMHealthTracker : NSObject {
    CMHealthTrackerInternal * _internal;
}

@property (nonatomic, readonly) CMHealthTrackerInternal *_internal;

+ (long long)isAuthorizedForMetMinutes;
+ (long long)isAuthorizedForVO2MaxData;
+ (bool)isMetMinutesAvailable;
+ (bool)isVO2MaxDataAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(id /* block */)arg3;
- (void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(id /* block */)arg2;

@end
