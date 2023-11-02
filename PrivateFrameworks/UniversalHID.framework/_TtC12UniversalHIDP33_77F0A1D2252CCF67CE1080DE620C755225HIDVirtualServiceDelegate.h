
@interface _TtC12UniversalHIDP33_77F0A1D2252CCF67CE1080DE620C755225HIDVirtualServiceDelegate : NSObject <HIDVirtualEventServiceDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void service;
}

- (void).cxx_destruct;
- (id)copyEventMatching:(id)arg1 forService:(id)arg2;
- (id)init;
- (void)notification:(long long)arg1 withProperty:(id)arg2 forService:(id)arg3;
- (id)propertyForKey:(id)arg1 forService:(id)arg2;
- (bool)setOutputEvent:(id)arg1 forService:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 forService:(id)arg3;

@end
