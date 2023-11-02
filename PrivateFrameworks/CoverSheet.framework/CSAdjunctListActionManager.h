
@interface CSAdjunctListActionManager : NSObject <SBFActionHandling> {
    <CSItemDestination> * _itemDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CSItemDestination> *itemDestination;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_actionIsInRelevantSlot:(id)arg1;
- (bool)_handleLockScreenContentAction:(id)arg1;
- (bool)handleAction:(id)arg1 forProvider:(id)arg2;
- (bool)handlesActionWithClass:(Class)arg1;
- (id)initWithItemDestination:(id)arg1;
- (id)itemDestination;
- (void)setItemDestination:(id)arg1;

@end
