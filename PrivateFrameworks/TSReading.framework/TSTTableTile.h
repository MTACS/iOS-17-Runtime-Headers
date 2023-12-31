
@interface TSTTableTile : TSPObject {
    unsigned char  mMaxColumn;
    unsigned short  mMaxRow;
    unsigned short  mNumCells;
    unsigned short  mNumRows;
    NSMutableArray * mRowInfos;
    unsigned char  mStorageVersion;
}

@property (nonatomic, readonly) unsigned char maxColumn;
@property (nonatomic, readonly) unsigned short maxRow;
@property (nonatomic, readonly) unsigned short numCells;
@property (nonatomic, readonly) unsigned short numRows;
@property (nonatomic, readonly) NSArray *rowInfos;

- (void)dealloc;
- (void)debugDump;
- (void)debugListRows;
- (id)description;
- (unsigned long long)flushableSize;
- (void)i_upgradeTileRowInfosWithDataStore:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (unsigned char)maxColumn;
- (unsigned short)maxRow;
- (unsigned short)numCells;
- (unsigned short)numRows;
- (id)packageLocator;
- (id)rowInfos;
- (void)validate;

@end
