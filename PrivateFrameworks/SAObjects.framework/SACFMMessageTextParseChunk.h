
@interface SACFMMessageTextParseChunk : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *chunkType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)messageTextParseChunk;
+ (id)messageTextParseChunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)chunkType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setChunkType:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
