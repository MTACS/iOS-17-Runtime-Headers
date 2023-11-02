
@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { 
        void **items; 
        struct NSSliceExternalAcquisitionProperties {} *acquisitionProps; 
        struct NSSliceExternalPersonalityProperties {} *personalityProps; 
        struct NSSliceInternalProperties {} *internalProps; 
    }  slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x1; struct NSSliceExternalAcquisitionProperties {} *x2; struct NSSliceExternalPersonalityProperties {} *x3; struct NSSliceInternalProperties {} *x4; }*)arg1 sentinel:(bool)arg2 dynamic:(bool)arg3;
+ (bool)initializeSlice:(struct NSSlice { void **x1; struct NSSliceExternalAcquisitionProperties {} *x2; struct NSSliceExternalPersonalityProperties {} *x3; struct NSSliceInternalProperties {} *x4; }*)arg1 withOptions:(unsigned long long)arg2;

- (int (*)acquireFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int (*)descriptionFunction;
- (unsigned long long)hash;
- (int (*)hashFunction;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (int (*)isEqualFunction;
- (int (*)relinquishFunction;
- (void)setAcquireFunction:(int (*)arg1;
- (void)setDescriptionFunction:(int (*)arg1;
- (void)setHashFunction:(int (*)arg1;
- (void)setIsEqualFunction:(int (*)arg1;
- (void)setRelinquishFunction:(int (*)arg1;
- (void)setSizeFunction:(int (*)arg1;
- (void)setUsesStrongWriteBarrier:(bool)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(bool)arg1;
- (int (*)sizeFunction;
- (bool)usesStrongWriteBarrier;
- (bool)usesWeakReadAndWriteBarriers;

@end
