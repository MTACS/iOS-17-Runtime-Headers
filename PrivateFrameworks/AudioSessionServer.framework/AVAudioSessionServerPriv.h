
@interface AVAudioSessionServerPriv : NSObject <AVAudioSessionServer> {
    <AVAudioSessionServerDelegate> * _serverDelegate;
    AVAudioSessionXPCServer * _xpcServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)activateWithFlags:(unsigned int)arg1 auditToken:(const struct { unsigned int x1[8]; }*)arg2 flags:(unsigned int)arg3;
- (struct tuple<int, bool> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, bool> { int x_1_1_1; bool x_1_1_2; } x1; })checkBooleanEntitlementForSession:(unsigned int)arg1 entitlementIdentifier:(const char *)arg2;
- (struct opaqueCMSession { }*)copyCMSession:(unsigned int)arg1;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession {} *x_1_1_1; void *x_1_1_2; unsigned int x_1_1_3; } x1; })createCoreMXSession:(const struct { unsigned int x1[8]; }*)arg1 type:(unsigned int)arg2;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession {} *x_1_1_1; void *x_1_1_2; unsigned int x_1_1_3; } x1; })createCoreMXSessionForPID:(int)arg1;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession {} *x_1_1_1; void *x_1_1_2; unsigned int x_1_1_3; } x1; })createCoreMXSessionForProcID:(const void*)arg1 type:(unsigned int)arg2;
- (id /* block */)createTimestampWriterForDevice:(id)arg1 halID:(unsigned int)arg2 isDecoupledInput:(bool)arg3;
- (int)deactivateWithFlags:(unsigned int)arg1 auditToken:(const struct { unsigned int x1[8]; }*)arg2 flags:(unsigned int)arg3;
- (int)destroyCMSessionForPID:(int)arg1 sessionID:(unsigned int)arg2;
- (int)destroySession:(unsigned int)arg1 auditToken:(const struct { unsigned int x1[8]; }*)arg2;
- (int)destroySession:(unsigned int)arg1 procID:(const void*)arg2;
- (void)destroyTimestampWriterForDevice:(id)arg1;
- (unsigned long long)dynamicLatencyForDevice:(unsigned int)arg1;
- (unsigned long long)dynamicLatencyForDevice:(unsigned int)arg1 isInput:(bool)arg2;
- (void)generateIOControllerEvent:(unsigned long long)arg1 forDevice:(unsigned int)arg2;
- (void*)getDefaultMXSession:(unsigned int)arg1;
- (struct tuple<int, std::string, int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int> { int x_1_1_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned int x_1_6_3 : 63; unsigned int x_1_6_4 : 1; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; unsigned char x_2_6_2[0]; unsigned int x_2_6_3 : 7; unsigned int x_2_6_4 : 1; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_1_1_2; int x_1_1_3; } x1; })getDescriptionForSession:(unsigned int)arg1;
- (struct tuple<int, std::string, int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int> { int x_1_1_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned int x_1_6_3 : 63; unsigned int x_1_6_4 : 1; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; unsigned char x_2_6_2[0]; unsigned int x_2_6_3 : 7; unsigned int x_2_6_4 : 1; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_1_1_2; int x_1_1_3; } x1; })getJSONDescriptionForSession:(unsigned int)arg1;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession {} *x_1_1_1; void *x_1_1_2; unsigned int x_1_1_3; } x1; })getPrimarySession:(const struct { unsigned int x1[8]; }*)arg1 createIfNecessary:(bool)arg2;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession {} *x_1_1_1; void *x_1_1_2; unsigned int x_1_1_3; } x1; })getPrimarySessionForPID:(int)arg1 createIfNecessary:(bool)arg2;
- (struct tuple<opaqueCMSession *, const void *, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> { struct opaqueCMSession {} *x_1_1_1; void *x_1_1_2; unsigned int x_1_1_3; } x1; })getPrimarySessionForProcID:(const void*)arg1 createIfNecessary:(bool)arg2;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })getSessionIDsForToken:(const struct { unsigned int x1[8]; }*)arg1;
- (id)init;
- (id)initWithAudioControlQueue:(id)arg1 delegate:(id)arg2;
- (bool)interruptDummyPlayersForSession:(unsigned int)arg1;
- (struct tuple<int, bool> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, bool> { int x_1_1_1; bool x_1_1_2; } x1; })isSessionMuted:(unsigned int)arg1;
- (void)mapSession:(unsigned int)arg1 isInput:(bool)arg2 toDevice:(id)arg3;
- (int)queuePIDOverridden:(int)arg1;
- (int)requestApplyInputMuteForSession:(unsigned int)arg1 inputMuted:(bool)arg2;
- (void)sampleRateChanged:(double)arg1 forDevice:(unsigned int)arg2;
- (int)setClientMuteState:(bool)arg1 sessionID:(unsigned int)arg2 playerType:(unsigned int)arg3 playerRef:(void*)arg4;
- (struct tuple<int, AudioSessionDuckingInfo> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, AudioSessionDuckingInfo> { int x_1_1_1; struct AudioSessionDuckingInfo { bool x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; })setPlayState:(unsigned int)arg1 sessionID:(unsigned int)arg2 playerType:(unsigned int)arg3 playerRef:(void*)arg4 modes:(unsigned int)arg5 subsessionRef:(void*)arg6;
- (void)startXPCServer;

@end
