
@protocol ECMessageBodyElement <ECMessageBodyConsumableInnerTextNode>

@required

- (NSArray *)nodes;
- (unsigned long long)quoteLevel;
- (void)setNodes:(NSArray *)arg1;
- (unsigned long long)valueForAttributes:(unsigned long long)arg1;

@end
