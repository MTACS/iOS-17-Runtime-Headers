
@protocol HAPAccessoryReachabilityClient <NSObject>

@required

- (void)confirm;
- (double)confirmInterval;
- (<HAPAccessoryReachabilityDelegate> *)delegate;
- (bool)isRunning;
- (void)kick;
- (<HAPAccessoryReachabilityProfile> *)profile;
- (void)setDelegate:(id <HAPAccessoryReachabilityDelegate>)arg1;
- (void)setProfile:(id <HAPAccessoryReachabilityProfile>)arg1;
- (void)startWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
