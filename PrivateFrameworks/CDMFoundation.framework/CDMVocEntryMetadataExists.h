
@interface CDMVocEntryMetadataExists : CDMVocEntryMetadata {
    long long  _constraintType;
    NSArray * _values;
}

@property (nonatomic, readonly) long long constraintType;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (long long)constraintType;
- (void)parseChunks:(id)arg1;
- (id)values;

@end
