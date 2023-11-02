
@interface WFPersonalHotspotSettingsClient : WFSettingsClient <WFBooleanStateSetting> {
    struct NETRBClient { } * _client;
}

@property (nonatomic) struct NETRBClient { }*client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (struct NETRBClient { }*)client;
- (void)dealloc;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithClient:(struct NETRBClient { }*)arg1;
- (void)setClient:(struct NETRBClient { }*)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
