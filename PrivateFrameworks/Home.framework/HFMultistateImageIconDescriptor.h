
@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor {
    NSDictionary * _dictionaryKeyedByPrimaryState;
}

@property (nonatomic, retain) NSDictionary *dictionaryKeyedByPrimaryState;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)dictionaryKeyedByPrimaryState;
- (unsigned long long)hash;
- (id)iconDescriptorForPrimaryState:(long long)arg1;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 defaultImageIdentifier:(id)arg2;
- (id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)arg1;
- (id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)arg1 defaultPrimaryState:(long long)arg2;
- (id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)arg1 defaultSymbolIconConfiguration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDictionaryKeyedByPrimaryState:(id)arg1;

@end
