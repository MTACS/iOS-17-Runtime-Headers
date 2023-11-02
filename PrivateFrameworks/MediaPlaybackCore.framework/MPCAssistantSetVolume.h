
@interface MPCAssistantSetVolume : NSObject

- (void)decreaseVolumeBy:(float)arg1 withUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)executeWithUIDs:(id)arg1 action:(unsigned long long)arg2 volumeValue:(float)arg3 completion:(id /* block */)arg4;
- (void)increaseVolumeBy:(float)arg1 withUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)setVolume:(float)arg1 withUIDs:(id)arg2 completion:(id /* block */)arg3;

@end
