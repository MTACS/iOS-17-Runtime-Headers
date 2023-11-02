
@interface WFParameterEditorModel : NSObject {
    bool  _becomeFirstResponder;
    WFGradient * _buttonGradient;
    WFParameter * _parameter;
    NSError * _resourceError;
    <WFParameterState> * _state;
    long long  _widgetFamily;
}

@property (nonatomic) bool becomeFirstResponder;
@property (nonatomic, readonly) WFGradient *buttonGradient;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) NSError *resourceError;
@property (nonatomic, readonly) <WFParameterState> *state;
@property (nonatomic, readonly) long long widgetFamily;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (id)buttonGradient;
- (id)initWithParameter:(id)arg1 state:(id)arg2;
- (id)initWithParameter:(id)arg1 state:(id)arg2 widgetFamily:(long long)arg3;
- (id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2;
- (id)parameter;
- (id)resourceError;
- (void)setBecomeFirstResponder:(bool)arg1;
- (id)state;
- (long long)widgetFamily;

@end
