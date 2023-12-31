
@interface TSTTableTileRowInfo : TSPContainedObject {
    unsigned short  mBufferSize;
    unsigned short  mCellCount;
    unsigned char  mMaxTileColumnIndex;
    bool  mMaxTileColumnIndexValid;
    struct __CFData { } * mStorageBuffer;
    unsigned short  mStorageOffsets;
    unsigned char  mStorageVersion;
    unsigned short  mTileRowIndex;
}

@property (nonatomic, readonly) unsigned short cellCount;
@property (nonatomic) unsigned short tileRowIndex;

- (unsigned short)cellCount;
- (void)dealloc;
- (void)debugDump;
- (id)description;
- (void)i_upgradeWithDataStore:(id)arg1;
- (id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2;
- (id)p_debugDumpCompact;
- (void)setTileRowIndex:(unsigned short)arg1;
- (unsigned short)tileRowIndex;
- (void)validate;

@end
