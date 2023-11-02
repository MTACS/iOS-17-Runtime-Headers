
@interface TSTCustomFormatList : TSTTableDataList {
    NSMutableDictionary * mNamesList;
}

- (unsigned int)addCustomFormat:(void*)arg1 duringImport:(bool)arg2;
- (unsigned int)addCustomFormat:(void*)arg1 withOldKey:(unsigned int)arg2;
- (id)allNumberKeys;
- (long long)count;
- (void*)customFormatForKey:(unsigned int)arg1;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (unsigned int)maxKey;
- (id)newUniqueNameFromName:(id)arg1;
- (id)newUniqueNameFromName:(id)arg1 preserveSeed:(bool)arg2;
- (void)p_setupNamesList;
- (bool)supportsIDMapForType:(int)arg1;

@end
