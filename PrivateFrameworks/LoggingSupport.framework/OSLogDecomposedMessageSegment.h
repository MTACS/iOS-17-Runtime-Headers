
@interface OSLogDecomposedMessageSegment : NSObject {
    OSLogDeserializedEventMessageArgument * _argument;
    NSDictionary * _backingDict;
    NSString * _literalPrefix;
    OSLogDeserializedMessagePlaceholder * _placeholder;
}

@property (nonatomic, readonly) OSLogDeserializedEventMessageArgument *argument;
@property (nonatomic, readonly) NSDictionary *backingDict;
@property (nonatomic, readonly) NSString *literalPrefix;
@property (nonatomic, readonly) OSLogDeserializedMessagePlaceholder *placeholder;

- (void).cxx_destruct;
- (id)argument;
- (id)backingDict;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;
- (id)literalPrefix;
- (id)placeholder;

@end
