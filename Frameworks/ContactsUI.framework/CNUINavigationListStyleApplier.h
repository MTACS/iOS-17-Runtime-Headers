
@interface CNUINavigationListStyleApplier : NSObject {
    <CNUINavigationListStyle> * _navigationListStyle;
}

@property (nonatomic, readonly) <CNUINavigationListStyle> *navigationListStyle;

- (void).cxx_destruct;
- (void)applyCollapsedBackgroundNavigationListStyleToCell:(id)arg1;
- (void)applyExpandedBackgroundNavigationListStyleToCell:(id)arg1;
- (void)applyNavigationListStyleToCell:(id)arg1;
- (void)applyNavigationListStyleToDetailCell:(id)arg1;
- (id)initWithNavigationListStyle:(id)arg1;
- (id)navigationListStyle;

@end
