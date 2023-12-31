
@interface AXReplayer : NSObject

+ (id)replayer;

- (void)replayWithName:(id)arg1 attempts:(long long)arg2 interval:(double)arg3 async:(bool)arg4 queue:(id)arg5 replayBlock:(id /* block */)arg6 completion:(id /* block */)arg7;

@end
