
@interface BBMaskedSet : NSObject {
    unsigned long long  _maskBits;
    NSMutableArray * _maskObjectSets;
}

@property (nonatomic, retain) NSMutableArray *maskObjectSets;

- (void).cxx_destruct;
- (void)_executeUsingMask:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)addObject:(id)arg1 withMask:(unsigned long long)arg2;
- (id)allObjects;
- (id)initWithMaskBits:(unsigned long long)arg1;
- (id)maskObjectSets;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsForMask:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)setMaskObjectSets:(id)arg1;

@end
