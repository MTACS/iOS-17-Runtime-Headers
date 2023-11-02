
@interface _AMUISwitcherVisibleItemRecord : NSObject {
    long long  _appearState;
    <AMUISwitcherItem> * _item;
    long long  _itemIndex;
    UIView * _itemView;
    long long  _nominalAppearState;
    double  _presentationProgress;
    AMUISwitcherViewController * _switcher;
    bool  _unsettled;
    UIViewController * _viewController;
}

- (void).cxx_destruct;
- (long long)_computeEffectiveAppearState;
- (void)_updateAppearState;
- (id)initWithItem:(id)arg1 index:(long long)arg2 forSwitcher:(id)arg3;

@end
