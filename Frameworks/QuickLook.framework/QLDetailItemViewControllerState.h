
@interface QLDetailItemViewControllerState : NSObject {
    NSString * _actionButtonTitle;
    UIView * _actionButtonView;
    bool  _informationVisible;
}

@property (retain) NSString *actionButtonTitle;
@property (retain) UIView *actionButtonView;
@property (getter=isInformationVisible) bool informationVisible;

+ (id)detailItemViewControllerStateWithActionButtonTitle:(id)arg1 actionButtonView:(id)arg2 informationVisible:(bool)arg3;

- (void).cxx_destruct;
- (id)actionButtonTitle;
- (id)actionButtonView;
- (bool)isInformationVisible;
- (void)setActionButtonTitle:(id)arg1;
- (void)setActionButtonView:(id)arg1;
- (void)setInformationVisible:(bool)arg1;

@end
