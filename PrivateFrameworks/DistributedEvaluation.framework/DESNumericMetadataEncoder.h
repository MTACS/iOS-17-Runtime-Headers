
@interface DESNumericMetadataEncoder : NSObject <DESMetadataEncoder>

- (id)encodeNumber:(id)arg1 toLength:(unsigned long long)arg2;
- (id)encodeNumberVector:(id)arg1 toLength:(unsigned long long)arg2;
- (id)encodeString:(id)arg1 toLength:(unsigned long long)arg2;
- (id)encodeStringVector:(id)arg1 toLength:(unsigned long long)arg2;
- (id)zeroWithLength:(unsigned long long)arg1;

@end
