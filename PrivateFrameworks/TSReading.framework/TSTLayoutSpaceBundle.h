
@interface TSTLayoutSpaceBundle : NSObject {
    TSTLayoutSpace * mFrozenHeaderColumnsSpace;
    TSTLayoutSpace * mFrozenHeaderCornerSpace;
    TSTLayoutSpace * mFrozenHeaderRowsSpace;
    TSTLayout * mLayout;
    TSTLayoutSpace * mRepeatHeaderColumnsSpace;
    TSTLayoutSpace * mRepeatHeaderCornerSpace;
    TSTLayoutSpace * mRepeatHeaderRowsSpace;
    TSTLayoutSpace * mSpace;
}

@property (nonatomic, retain) TSTLayoutSpace *frozenHeaderColumnsSpace;
@property (nonatomic, retain) TSTLayoutSpace *frozenHeaderCornerSpace;
@property (nonatomic, retain) TSTLayoutSpace *frozenHeaderRowsSpace;
@property (nonatomic) TSTLayout *layout;
@property (nonatomic, retain) TSTLayoutSpace *repeatHeaderColumnsSpace;
@property (nonatomic, retain) TSTLayoutSpace *repeatHeaderCornerSpace;
@property (nonatomic, retain) TSTLayoutSpace *repeatHeaderRowsSpace;
@property (nonatomic, retain) TSTLayoutSpace *space;

- (void)dealloc;
- (id)description;
- (id)frozenHeaderColumnsSpace;
- (id)frozenHeaderCornerSpace;
- (id)frozenHeaderRowsSpace;
- (id)getSpaceContainingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)initWithLayout:(id)arg1;
- (void)invalidateCoordinates;
- (void)invalidateTableOffsets;
- (id)layout;
- (void)performActionOnEachLayoutSpace:(id /* block */)arg1;
- (bool)performActionOnFrozenLayoutSpaces:(id /* block */)arg1;
- (bool)performActionOnRepeatLayoutSpaces:(id /* block */)arg1;
- (id)repeatHeaderColumnsSpace;
- (id)repeatHeaderCornerSpace;
- (id)repeatHeaderRowsSpace;
- (void)setFrozenHeaderColumnsSpace:(id)arg1;
- (void)setFrozenHeaderCornerSpace:(id)arg1;
- (void)setFrozenHeaderRowsSpace:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setRepeatHeaderColumnsSpace:(id)arg1;
- (void)setRepeatHeaderCornerSpace:(id)arg1;
- (void)setRepeatHeaderRowsSpace:(id)arg1;
- (void)setSpace:(id)arg1;
- (id)space;
- (int)validateLayoutSpaces;

@end
