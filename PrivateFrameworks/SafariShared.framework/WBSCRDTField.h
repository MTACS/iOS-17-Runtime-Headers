
@interface WBSCRDTField : NSObject <NSCopying> {
    NSString * _deviceIdentifier;
    WBSCRDTGeneration * _generation;
    NSMutableDictionary * _metadata;
    bool  _shouldIncrementGeneration;
    id  _value;
    id /* block */  _valueProvider;
    id  _valueSource;
    id /* block */  _valueUpdater;
}

@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) WBSCRDTGeneration *generation;
@property (nonatomic) bool shouldIncrementGeneration;
@property (nonatomic, copy) <NSCopying> *value;

- (void).cxx_destruct;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (id)generation;
- (unsigned long long)hash;
- (void)incrementGenerationIfNeeded;
- (id)init;
- (id)initWithValue:(id)arg1 generation:(id)arg2 deviceIdentifier:(id)arg3;
- (id)initWithValue:(id)arg1 valueSource:(id)arg2 valueProvider:(id /* block */)arg3 valueUpdater:(id /* block */)arg4 generation:(id)arg5 deviceIdentifier:(id)arg6;
- (id)initWithValueSource:(id)arg1 valueProvider:(id /* block */)arg2 valueUpdater:(id /* block */)arg3 generation:(id)arg4 deviceIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (long long)mergeWithField:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setGeneration:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setShouldIncrementGeneration:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValue:(id)arg1 incrementGenerationIfNeeded:(bool)arg2;
- (bool)shouldIncrementGeneration;
- (id)value;

@end
