
@interface PXGSublayoutDataStore : NSObject <PXGDiagnosticsProvider> {
    long long  _capacity;
    long long  _count;
    struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; unsigned short x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_6_1_1; double x_6_1_2; } x6; double x7; } * _geometries;
    struct { void *x1; void *x2; } * _infos;
    long long  _version;
}

@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic, readonly) struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; unsigned short x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_6_1_1; double x_6_1_2; } x6; double x7; }*geometries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { void *x1; void *x2; }*infos;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;

- (void)_insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_invalidateVersion;
- (long long)count;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)enumerateSublayoutGeometriesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSublayoutGeometriesUsingBlock:(id /* block */)arg1;
- (void)enumerateSublayoutsAtPoint:(struct CGPoint { double x1; double x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSublayoutsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSublayoutsUsingBlock:(id /* block */)arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; unsigned short x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_6_1_1; double x_6_1_2; } x6; double x7; }*)geometries;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; unsigned short x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_6_1_1; double x_6_1_2; } x6; double x7; })geometryForSublayout:(id)arg1;
- (long long)indexOfSublayout:(id)arg1;
- (struct { void *x1; void *x2; }*)infos;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)moveSublayoutsFromIndexes:(struct __CFArray { }*)arg1 toIndexes:(id)arg2;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCount:(long long)arg1;
- (unsigned int)spriteIndexOriginForSublayout:(id)arg1;
- (unsigned int)spriteIndexOriginForSublayoutIndex:(long long)arg1;
- (id)sublayoutAtIndex:(long long)arg1;
- (id)sublayoutProviderAtIndex:(long long)arg1;
- (long long)version;

@end
