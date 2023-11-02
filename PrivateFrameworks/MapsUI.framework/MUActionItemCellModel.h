
@interface MUActionItemCellModel : NSObject <MUDynamicButtonCellModel> {
    id /* block */  _actionBlock;
    MKPlaceCardActionItem * _actionItem;
    <MUDynamicButtonCellModelChangeDelegate> * _changeDelegate;
    UIMenu * _menu;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) long long actionStyle;
@property (nonatomic) <MUDynamicButtonCellModelChangeDelegate> *changeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIMenu *menu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *titleString;

- (void).cxx_destruct;
- (void)_registerObserver;
- (id)_resolvedActionItem;
- (id)accessibilityIdentifierForAction;
- (id /* block */)actionBlock;
- (long long)actionStyle;
- (id)changeDelegate;
- (void)dealloc;
- (id)initWithActionItem:(id)arg1;
- (bool)isEnabled;
- (id)menu;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setMenu:(id)arg1;
- (id)symbolName;
- (id)titleString;

@end
