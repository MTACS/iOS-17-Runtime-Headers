
@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder {
    NSDictionary * _backingDict;
    _OSLogEventSerializationMetadata * _metadata;
}

@property (nonatomic, readonly) NSDictionary *backingDict;
@property (nonatomic, readonly) _OSLogEventSerializationMetadata *metadata;

- (void).cxx_destruct;
- (id)backingDict;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (int)precision;
- (id)rawString;
- (id)tokens;
- (id)type;
- (id)typeNamespace;
- (int)width;

@end
