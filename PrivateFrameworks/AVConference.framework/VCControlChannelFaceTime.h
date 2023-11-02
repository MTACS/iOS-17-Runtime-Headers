
@interface VCControlChannelFaceTime : VCControlChannel {
    struct tagHANDLE { int x1; } * _SIPHandle;
    unsigned int  _callID;
}

- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting { }*)arg2;
- (void)sendReliableMessage:(id)arg1 withTopic:(id)arg2;
- (bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2;

@end
