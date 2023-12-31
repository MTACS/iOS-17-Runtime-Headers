
@interface TSTTableDataList : TSPObject {
    TSTIntegerKeyDict * mData;
    TSTTableDataObjectKeyDict * mIDs;
    int  mListType;
    unsigned int  mNextID;
}

@property (nonatomic, readonly) TSTIntegerKeyDict *data;
@property (nonatomic, readonly) unsigned int nextID;

- (id)allRichTextPayloadStorages;
- (id)data;
- (void)dealloc;
- (unsigned long long)flushableSize;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (unsigned int)nextID;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (id)packageLocator;
- (bool)supportsIDMapForType:(int)arg1;

@end
