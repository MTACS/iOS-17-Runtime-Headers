
@interface PXGSpriteDataStore : NSObject <PXGDiagnosticsProvider> {
    unsigned int  _capacity;
    unsigned int  _count;
    struct { unsigned int x1; } * _entities;
    struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } * _geometries;
    struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; } * _infos;
    struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; } * _styles;
}

@property (nonatomic) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic, readonly) struct { unsigned int x1; }*entities;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*geometries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*infos;
@property (nonatomic) struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; } sprites;
@property (nonatomic, readonly) struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*styles;
@property (readonly) Class superclass;

+ (id)newSpriteDataStore;

- (void)_collectSpriteIndexes:(id)arg1 inRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_init;
- (void)applyChangeDetails:(id)arg1;
- (void)clearEntities;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)diagnosticDescription;
- (struct { unsigned int x1; }*)entities;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)geometries;
- (struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)infos;
- (id)init;
- (void)insertSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1;
- (void)moveSpritesFromIndexes:(struct __CFArray { }*)arg1 toIndexes:(id)arg2;
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 toRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg2;
- (void)recycle;
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg1;
- (struct { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; })spriteAtIndex:(unsigned int)arg1;
- (id)spriteAtIndexes:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)spriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)spriteIndexesWithSpriteInfoFlags:(unsigned char)arg1;
- (struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })sprites;
- (struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })spritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1;
- (struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)styles;

@end
