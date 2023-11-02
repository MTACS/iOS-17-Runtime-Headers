
@interface WFParameterValuePickerTableViewCell : UITableViewCell {
    bool  _containedInState;
    <WFParameterValuePickerTableViewCellDelegate> * _delegate;
    bool  _disablesSeparatorIconInset;
    WFParameter<WFParameterValuePickable> * _parameter;
    UIViewController * _parentViewController;
    WFCodableAttributeBackedSubstitutableState * _state;
}

@property (getter=isContainedInState, nonatomic) bool containedInState;
@property (nonatomic) <WFParameterValuePickerTableViewCellDelegate> *delegate;
@property (nonatomic) bool disablesSeparatorIconInset;
@property (nonatomic, retain) WFParameter<WFParameterValuePickable> *parameter;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) WFCodableAttributeBackedSubstitutableState *state;

- (void).cxx_destruct;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (id)delegate;
- (bool)disablesSeparatorIconInset;
- (bool)isContainedInState;
- (id)parameter;
- (id)parentViewController;
- (void)setContainedInState:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisablesSeparatorIconInset:(bool)arg1;
- (void)setParameter:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)tintColorDidChange;
- (void)updateConfigurationUsingState:(id)arg1;

@end
