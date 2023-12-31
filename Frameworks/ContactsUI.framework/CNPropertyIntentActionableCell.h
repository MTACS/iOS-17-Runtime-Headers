
@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell {
    NSArray * _actions;
}

@property (nonatomic, retain) NSArray *actions;

- (void).cxx_destruct;
- (id)actions;
- (id)defaultContext;
- (void)performDefaultAction;
- (void)setActions:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (void)transportButton1Clicked:(id)arg1;
- (void)transportButton2Clicked:(id)arg1;
- (void)transportButton3Clicked:(id)arg1;
- (id)transportsMapping;
- (void)updateTransportButtons;

@end
