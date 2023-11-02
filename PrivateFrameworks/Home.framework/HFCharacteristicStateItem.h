
@interface HFCharacteristicStateItem : HFItem <NAIdentifiable> {
    NSString * _characteristicType;
    id /* block */  _resultsProvider;
    <HFAggregatedCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly, copy) NSString *characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ resultsProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFAggregatedCharacteristicValueSource> *valueSource;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)characteristicType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCharacteristicType:(id)arg1 valueSource:(id)arg2 resultsProvider:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (id /* block */)resultsProvider;
- (id)valueSource;

@end
