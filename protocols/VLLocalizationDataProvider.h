
@protocol VLLocalizationDataProvider <NSObject>

@required

- (<VLLocalizationDataProviderDelegate> *)delegate;
- (void)determineAvailabilityForCoordinate:(void *)arg1 horizontalAccuracy:(void *)arg2 purpose:(void *)arg3 callbackQueue:(void *)arg4 callback:(void *)arg5; // needs 5 arg types, found 11: const struct { double x1; double x2; }*, double, long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSURL *)fileURLForKey:(const struct { int x1; int x2; int x3; int x4; }*)arg1 error:(id*)arg2;
- (void)setDelegate:(id <VLLocalizationDataProviderDelegate>)arg1;

@end
