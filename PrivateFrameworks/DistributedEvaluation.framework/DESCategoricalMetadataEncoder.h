
@interface DESCategoricalMetadataEncoder : NSObject <DESMetadataEncoder> {
    NSDictionary * _schemaDict;
    bool  _useRange;
}

@property (nonatomic, readonly) bool useRange;

- (void).cxx_destruct;
- (id)encodeNumber:(id)arg1 toLength:(unsigned long long)arg2;
- (id)encodeNumberVector:(id)arg1 toLength:(unsigned long long)arg2;
- (id)encodeString:(id)arg1 toLength:(unsigned long long)arg2;
- (id)encodeStringVector:(id)arg1 toLength:(unsigned long long)arg2;
- (unsigned long long)findBucketIndexOfNumber:(id)arg1 inItems:(id)arg2;
- (unsigned long long)findBucketIndexOfString:(id)arg1 inItems:(id)arg2;
- (id)initWithSingleSchema:(id)arg1;
- (bool)useRange;
- (id)zeroWithLength:(unsigned long long)arg1;

@end
