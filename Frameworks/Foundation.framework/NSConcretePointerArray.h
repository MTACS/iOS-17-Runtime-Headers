
@interface NSConcretePointerArray : NSPointerArray {
    unsigned long long  capacity;
    unsigned long long  count;
    bool  hasDynamicSlice;
    unsigned long long  mutations;
    bool  needsCompaction;
    unsigned long long  options;
    struct NSSlice { 
        void **items; 
        struct NSSliceExternalAcquisitionProperties {} *acquisitionProps; 
        struct NSSliceExternalPersonalityProperties {} *personalityProps; 
        struct NSSliceInternalProperties {} *internalProps; 
    }  slice;
}

+ (bool)supportsSecureCoding;

- (void)_markNeedsCompaction;
- (void)addPointer:(void*)arg1;
- (void)arrayGrow:(unsigned long long)arg1;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfPointer:(void*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void*)pointerAtIndex:(unsigned long long)arg1;
- (id)pointerFunctions;
- (void)removePointer:(void*)arg1;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned long long)arg1;

@end
