
@interface ICTTMergeableStringVersionedDocument : ICTTVersionedDocument {
    ICTTMergeableAttributedString * _mergeableString;
}

@property (nonatomic, readonly) ICTTMergeableAttributedString *mergeableString;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)initWithMergeableString:(id)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithStringVersionedDocument:(id)arg1;
- (id)mergeableString;
- (id)serializeCurrentVersion:(unsigned int*)arg1;

@end
