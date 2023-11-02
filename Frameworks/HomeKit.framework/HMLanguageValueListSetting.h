
@interface HMLanguageValueListSetting : HMImmutableSetting {
    NSArray * _languageValues;
}

@property (readonly, copy) NSArray *languageValues;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 languageValues:(id)arg3;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 payload:(id)arg3;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageValues;
- (id)payloadCopy;
- (id)protoPayload;

@end
