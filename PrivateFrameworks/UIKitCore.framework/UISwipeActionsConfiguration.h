
@interface UISwipeActionsConfiguration : NSObject {
    double  __roundedStyleCornerRadius;
    long long  __swipeActionsStyle;
    NSArray * _actions;
    bool  _autosizesButtons;
    bool  _performsFirstActionWithFullSwipe;
}

@property (getter=_roundedStyleCornerRadius, setter=_setRoundedStyleCornerRadius:, nonatomic) double _roundedStyleCornerRadius;
@property (getter=_swipeActionsStyle, setter=_setSwipeActionsStyle:, nonatomic) long long _swipeActionsStyle;
@property (nonatomic, readonly, copy) NSArray *actions;
@property (getter=_autosizesButtons, setter=_setAutosizesButtons:, nonatomic) bool autosizesButtons;
@property (nonatomic) bool performsFirstActionWithFullSwipe;

+ (id)configurationWithActions:(id)arg1;

- (void).cxx_destruct;
- (bool)_autosizesButtons;
- (double)_roundedStyleCornerRadius;
- (void)_setAutosizesButtons:(bool)arg1;
- (void)_setRoundedStyleCornerRadius:(double)arg1;
- (void)_setSwipeActionsStyle:(long long)arg1;
- (long long)_swipeActionsStyle;
- (id)actions;
- (id)description;
- (id)init;
- (bool)performsFirstActionWithFullSwipe;
- (void)setPerformsFirstActionWithFullSwipe:(bool)arg1;

@end
