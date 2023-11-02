
@protocol NEIKEv2ConfigurationDelegate <NSObject>

@required

- (void)requestConfigurationForSession:(void *)arg1 sessionConfig:(void *)arg2 childConfig:(void *)arg3 validateAuthBlock:(void *)arg4 responseBlock:(void *)arg5; // needs 5 arg types, found 17: NEIKEv2Session *, NEIKEv2SessionConfiguration *, NEIKEv2ChildSAConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NEIKEv2SessionConfiguration *, void*, id /* block */, void*, void, id /* block */, NEIKEv2SessionConfiguration *, NEIKEv2ChildSAConfiguration *, struct NEVirtualInterface_s { }*, void*
- (void)sessionFailedBeforeRequestingConfiguration:(NEIKEv2Session *)arg1;

@end
