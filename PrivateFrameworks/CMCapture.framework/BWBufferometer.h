
@interface BWBufferometer : NSObject

+ (void)initialize;
+ (long long)totalTrackedBuffersInFlight;
+ (long long)totalTrackedSizeInFlight;
+ (void)trackBuffer:(void*)arg1 trackedSize:(long long)arg2;
+ (void)trackBuffer:(void*)arg1 trackedSize:(long long)arg2 tag:(id)arg3 bufferType:(id)arg4;

@end
