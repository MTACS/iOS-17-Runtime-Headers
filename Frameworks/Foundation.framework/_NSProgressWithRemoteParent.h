
@interface _NSProgressWithRemoteParent : NSProgress {
    NSXPCConnection * _parentConnection;
    unsigned long long  _sequence;
}

@property (retain) NSXPCConnection *parentConnection;
@property unsigned long long sequence;

- (void)_sendCancellableOrPausableUpdate:(bool)arg1 stringKey:(const char *)arg2 intKey:(int)arg3;
- (void)_setCancellable:(bool)arg1 fromChild:(bool)arg2;
- (void)_setPausable:(bool)arg1 fromChild:(bool)arg2;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(bool)arg3;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple { struct _NSProgressFraction { long long x_1_1_1; long long x_1_1_2; bool x_1_1_3; } x1; struct _NSProgressFraction { long long x_2_1_1; long long x_2_1_2; bool x_2_1_3; } x2; })arg1;
- (void)dealloc;
- (id)parentConnection;
- (unsigned long long)sequence;
- (void)setCancellable:(bool)arg1;
- (void)setParentConnection:(id)arg1;
- (void)setPausable:(bool)arg1;
- (void)setSequence:(unsigned long long)arg1;

@end
