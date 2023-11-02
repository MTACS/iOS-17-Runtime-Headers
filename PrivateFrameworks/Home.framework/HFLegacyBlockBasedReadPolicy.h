
@interface HFLegacyBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy> {
    id /* block */  _readValidator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ readValidator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2;
- (id)init;
- (id)initWithReadValidator:(id /* block */)arg1;
- (id /* block */)readValidator;

@end
