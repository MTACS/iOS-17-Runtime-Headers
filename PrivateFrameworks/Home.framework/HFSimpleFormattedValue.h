
@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue> {
    <HFStringGenerator> * _currentFormattedValue;
}

@property (nonatomic, readonly) <HFStringGenerator> *currentFormattedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)currentFormattedValue;
- (id)initWithFormattedValue:(id)arg1;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)arg1;
- (id)value;

@end
