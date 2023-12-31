
@interface TSTCellDictionary : NSObject {
    TSUIntegerKeyDictionary * mDict;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mDictRWLock;
}

- (id)allCells;
- (void)applyBlockToAllCells:(id /* block */)arg1;
- (id)cellAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)dealloc;
- (id)init;
- (void)removeAllCells;
- (void)setCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end
