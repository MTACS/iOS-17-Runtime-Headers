
@interface MXBiomeStreams : NSObject {
    NSObject<OS_dispatch_queue> * mAccessQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)updateBiomeSilentMode:(bool)arg1 clientType:(unsigned int)arg2 untilTime:(id)arg3 reason:(id)arg4;

@end
