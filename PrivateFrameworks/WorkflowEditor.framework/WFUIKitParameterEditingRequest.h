
@interface WFUIKitParameterEditingRequest : NSObject <NSSecureCoding> {
    <WFParameterState> * _currentState;
    WFParameter * _parameter;
}

@property (nonatomic, readonly) <WFParameterState> *currentState;
@property (nonatomic, readonly) WFParameter *parameter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameter:(id)arg1 currentState:(id)arg2;
- (id)parameter;

@end
