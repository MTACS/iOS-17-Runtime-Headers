
@protocol TextSequence <NSObject>

@required

- (void)addWordWithInputId:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (NSArray *)sequence;

@end
