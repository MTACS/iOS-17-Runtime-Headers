
@interface _TtCC24IntelligencePlatformCore18FeedbackServiceXPC6Server : NSObject <GDFeedbackServiceXPCProtocol> {
    void clientIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  config;
    void database;
}

- (void).cxx_destruct;
- (id)init;
- (void)logFeedback:(id)arg1 ofType:(id)arg2 ofVariant:(id)arg3 forEvent:(long long)arg4 withTimestamp:(id)arg5 shouldProcessImmediately:(bool)arg6 completion:(id /* block */)arg7;

@end
