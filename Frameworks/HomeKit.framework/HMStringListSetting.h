
@interface HMStringListSetting : HMImmutableSetting {
    NSArray * _stringListValue;
}

@property (readonly, copy) NSArray *stringListValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 payload:(id)arg3;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 stringListValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)stringListValue;

@end
