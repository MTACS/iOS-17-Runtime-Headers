
@interface SearchUISwitchAccessoryViewController : SearchUIAccessoryViewController {
    WFContextualAction * _action;
    id /* block */  _debounceBlock;
    bool  _expectedUpdateState;
    bool  _isAwaitingUpdate;
    bool  _isHiddenByEvent;
    SearchUIBiomeStreamSubscriber * _subscriber;
}

@property (retain) WFContextualAction *action;
@property (copy) id /* block */ debounceBlock;
@property bool expectedUpdateState;
@property bool isAwaitingUpdate;
@property (nonatomic) bool isHiddenByEvent;
@property (retain) SearchUIBiomeStreamSubscriber *subscriber;
@property (nonatomic, retain) UISwitch *view;

+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (void)buttonPressed;
- (void)dealloc;
- (id /* block */)debounceBlock;
- (void)debounceSetOn:(bool)arg1 animated:(bool)arg2;
- (bool)expectedUpdateState;
- (bool)isAwaitingUpdate;
- (bool)isHiddenByEvent;
- (void)setAction:(id)arg1;
- (void)setDebounceBlock:(id /* block */)arg1;
- (void)setExpectedUpdateState:(bool)arg1;
- (void)setIsAwaitingUpdate:(bool)arg1;
- (void)setIsHiddenByEvent:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setSubscriber:(id)arg1;
- (id)setupView;
- (id)subscriber;
- (void)updateForEvent:(id)arg1 animated:(bool)arg2;
- (void)updateWithNotification:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end
