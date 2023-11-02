
@interface WFParameterValueWrapper : NSObject {
    WFParameter<WFParameterValuePickable> * _parameter;
    <WFParameterState> * _value;
}

@property (nonatomic, readonly) WFParameter<WFParameterValuePickable> *parameter;
@property (nonatomic, readonly, copy) NSString *readableTitle;
@property (nonatomic, readonly) <WFParameterState> *value;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 parameter:(id)arg2;
- (id)parameter;
- (id)readableTitle;
- (id)value;

@end
