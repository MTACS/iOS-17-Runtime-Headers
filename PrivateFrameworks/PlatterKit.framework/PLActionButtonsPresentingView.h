
@interface PLActionButtonsPresentingView : UIView {
    PLPlatterActionButtonsView * _actionButtonsView;
    bool  _defaultActionTriggered;
    unsigned long long  _interfaceEdge;
    unsigned long long  _layoutLocation;
}

@property (nonatomic, retain) PLPlatterActionButtonsView *actionButtonsView;
@property (nonatomic) bool defaultActionTriggered;
@property (nonatomic) unsigned long long interfaceEdge;
@property (nonatomic) unsigned long long layoutLocation;

- (void).cxx_destruct;
- (id)actionButtonsView;
- (bool)defaultActionTriggered;
- (id)initWithActionButtonsView:(id)arg1 interfaceEdge:(unsigned long long)arg2 layoutLocation:(unsigned long long)arg3;
- (unsigned long long)interfaceEdge;
- (unsigned long long)layoutLocation;
- (void)setActionButtonsView:(id)arg1;
- (void)setDefaultActionTriggered:(bool)arg1;
- (void)setInterfaceEdge:(unsigned long long)arg1;
- (void)setLayoutLocation:(unsigned long long)arg1;

@end
