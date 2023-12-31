
@protocol ECMessageBodyStringAccumulator <NSObject>

@required

- (NSString *)accumulatedString;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(NSString *)arg2;
- (void)appendInnerTextWithConsumableNode:(id <ECMessageBodyConsumableInnerTextNode>)arg1;
- (void)appendNewline;
- (void)appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofString:(NSString *)arg2;
- (void)appendString:(NSString *)arg1;
- (bool)isFull;

@end
