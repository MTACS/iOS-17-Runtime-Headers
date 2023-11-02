
@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {
    double  mHorizontalScaleFactor;
    void * mMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalScaleFactor;
@property (readonly) Class superclass;

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2 willModify:(bool)arg3;
- (long long)count;
- (void)dealloc;
- (unsigned long long)flushableSize;
- (id)headerForKey:(unsigned int)arg1 willModify:(bool)arg2;
- (id)headerForKey:(unsigned int)arg1 willModify:(bool)arg2 createIfNotThere:(bool)arg3;
- (double)horizontalScaleFactor;
- (id)initWithContext:(id)arg1;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(bool)arg2;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (id)packageLocator;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (void)setHorizontalScaleFactor:(double)arg1;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;

@end
