
@interface WFActionProvider : NSObject {
    <WFActionProviderDelegate> * _delegate;
    INStringLocalizer * _stringLocalizer;
}

@property (nonatomic) <WFActionProviderDelegate> *delegate;
@property (nonatomic, retain) INStringLocalizer *stringLocalizer;

- (void).cxx_destruct;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1;
- (void)createActionsForRequests:(id)arg1 forceLocalActionsOnly:(bool)arg2;
- (id)createAllAvailableActions;
- (id)delegate;
- (void)deleteCache;
- (void)fetchRemoteConfiguration:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStringLocalizer:(id)arg1;
- (id)stringLocalizer;

@end
