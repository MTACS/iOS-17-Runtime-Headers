
@interface CSBackgroundContentActionManager : NSObject <SBFActionHandling> {
    NSMutableSet * _activeActions;
    <SBFActionProviding> * _contentActionProvider;
    <CSBackgroundContentActionManagerDelegate> * _delegate;
}

@property (nonatomic, retain) NSMutableSet *activeActions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSBackgroundContentActionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addAction:(id)arg1;
- (void)_removeAction:(id)arg1;
- (id)activeActions;
- (id)delegate;
- (bool)handleAction:(id)arg1 forProvider:(id)arg2;
- (bool)handlesActionWithClass:(Class)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setActiveActions:(id)arg1;
- (void)setContentActionProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)validActionWithIdentifierIfExists:(id)arg1;

@end
