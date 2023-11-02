
@interface RWIProtocolRuntimeErrorRange : RWIProtocolJSONObject

@property (nonatomic) int endOffset;
@property (nonatomic) int startOffset;

- (int)endOffset;
- (id)initWithStartOffset:(int)arg1 endOffset:(int)arg2;
- (void)setEndOffset:(int)arg1;
- (void)setStartOffset:(int)arg1;
- (int)startOffset;

@end
