
@protocol TSTTableHeaderStorage <NSObject>

@required

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2 willModify:(bool)arg3;
- (long long)count;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(bool)arg2;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(bool)arg2 createIfNotThere:(bool)arg3;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(bool)arg2;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(TSTTableHeaderInfo *)arg1 forKey:(unsigned int)arg2;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;

@end
