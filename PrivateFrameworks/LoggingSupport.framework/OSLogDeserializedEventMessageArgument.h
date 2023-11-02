
@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument {
    NSDictionary * _backingDict;
    _OSLogEventSerializationMetadata * _metadata;
}

@property (nonatomic, readonly) NSDictionary *backingDict;
@property (nonatomic, readonly) _OSLogEventSerializationMetadata *metadata;

- (void).cxx_destruct;
- (id)_numValue;
- (unsigned long long)availability;
- (id)backingDict;
- (unsigned long long)category;
- (double)doubleValue;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;
- (long long)int64Value;
- (long double)longDoubleValue;
- (id)metadata;
- (id)objectRepresentation;
- (unsigned long long)privacy;
- (const void*)rawBytes;
- (unsigned short)rawBytesLength;
- (unsigned long long)scalarCategory;
- (unsigned long long)scalarType;
- (unsigned long long)unsignedInt64Value;

@end
