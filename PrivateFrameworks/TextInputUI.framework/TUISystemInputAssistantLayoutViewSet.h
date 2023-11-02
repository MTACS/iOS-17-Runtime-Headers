
@interface TUISystemInputAssistantLayoutViewSet : NSObject {
    UIView * _centerView;
    TUIAssistantButtonBarView * _leftButtonBar;
    TUIAssistantButtonBarView * _rightButtonBar;
    TUIAssistantButtonBarView * _unifiedButtonBar;
}

@property (nonatomic, retain) UIView *centerView;
@property (nonatomic, retain) TUIAssistantButtonBarView *leftButtonBar;
@property (nonatomic, retain) TUIAssistantButtonBarView *rightButtonBar;
@property (nonatomic, retain) TUIAssistantButtonBarView *unifiedButtonBar;

- (void).cxx_destruct;
- (id)centerView;
- (id)leftButtonBar;
- (id)rightButtonBar;
- (void)setCenterView:(id)arg1;
- (void)setLeftButtonBar:(id)arg1;
- (void)setRightButtonBar:(id)arg1;
- (void)setUnifiedButtonBar:(id)arg1;
- (id)unifiedButtonBar;

@end
