
@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage> {
    TSTTableHeaderStorageBucket * mBuckets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2 willModify:(bool)arg3;
- (long long)count;
- (void)dealloc;
- (id)headerForKey:(unsigned int)arg1 willModify:(bool)arg2;
- (id)headerForKey:(unsigned int)arg1 willModify:(bool)arg2 createIfNotThere:(bool)arg3;
- (id)initWithOwner:(id)arg1;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(bool)arg2;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;

@end
