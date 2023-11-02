
@interface WFUIKitParameterEditingResponse : NSObject <NSSecureCoding> {
    <WFParameterState> * _parameterState;
}

@property (nonatomic, readonly) <WFParameterState> *parameterState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterState:(id)arg1;
- (id)parameterState;

@end
