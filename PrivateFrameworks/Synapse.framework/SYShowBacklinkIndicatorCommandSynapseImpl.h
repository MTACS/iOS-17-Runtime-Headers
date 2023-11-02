
@interface SYShowBacklinkIndicatorCommandSynapseImpl : NSObject <SYShowBacklinkIndicatorCommandImpl> {
    SYBacklinkIndicatorClient * __client;
    bool  _didSucceed;
}

@property (nonatomic, retain) SYBacklinkIndicatorClient *_client;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSucceed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_client;
- (bool)didSucceed;
- (id)initWithDomainIdentifiers:(id)arg1 linkIdentifiers:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (void)runWithCompletion:(id /* block */)arg1;
- (void)setDidSucceed:(bool)arg1;
- (void)set_client:(id)arg1;

@end
