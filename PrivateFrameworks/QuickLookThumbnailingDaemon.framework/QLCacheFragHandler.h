
@interface QLCacheFragHandler : NSObject {
    _QLCacheThread * _cacheThread;
    unsigned long long  _holesLen;
    bool  _isDirty;
    bool  _needsCompact;
    NSMutableArray * _orderedByStart;
    NSString * _path;
    NSArray * _sizeRanks;
    unsigned long long  _totalLen;
}

@property _QLCacheThread *cacheThread;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_insertHoleInRanks:(id)arg1;
- (void)_removeHoleFromRanks:(id)arg1;
- (unsigned long long)allocateSpaceForLength:(unsigned long long)arg1 added:(bool*)arg2;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2;
- (id)cacheThread;
- (bool)canFindHoleForLen:(unsigned long long)arg1;
- (bool)checkConsistency;
- (bool)checkHolesLenConsistency;
- (void)clear;
- (void)compact;
- (id)dataToSave;
- (float)frag;
- (id)initWithCacheThread:(id)arg1;
- (id)initWithDictionary:(id)arg1 cacheThread:(id)arg2;
- (id)initWithFilePath:(id)arg1 cacheThread:(id)arg2;
- (id)initWithHolePositions:(id)arg1 holeLengths:(id)arg2 totalLength:(long long)arg3 holesLength:(long long)arg4 cacheThread:(id)arg5;
- (bool)isDirty;
- (id)lastHole;
- (id)orderedByStart;
- (void)releaseSpaceAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2;
- (bool)save;
- (void)setCacheThread:(id)arg1;
- (unsigned long long)totalLen;
- (void)truncateFromPosition:(unsigned long long)arg1;
- (void)truncateUselessSpaceAtEndOfFile;

@end
