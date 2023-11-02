
@interface TSAuthFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSData * _externalizedContext;
    bool  _isLocalConvertFlow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property bool isLocalConvertFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)externalizedContext;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithExternalizedContext:(id)arg1 isLocalConvertFlow:(bool)arg2;
- (bool)isLocalConvertFlow;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setIsLocalConvertFlow:(bool)arg1;

@end
