
@interface NMSSyncStatesDict : NSObject <NSCopying> {
    NSMutableDictionary * _syncStatesDict;
    NSMutableDictionary * _waitingSubstatesDict;
}

+ (id)assetTypeForMediaType:(unsigned long long)arg1;
+ (unsigned long long)mediaTypeForAssetType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setSyncState:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2;
- (void)setSyncStateForAllMediaTypes:(unsigned long long)arg1;
- (void)setWaitingSubstate:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2;
- (void)setWaitingSubstateForAllMediaTypes:(unsigned long long)arg1;
- (id)syncStateDictionaryRepresentation;
- (unsigned long long)syncStateForMediaType:(unsigned long long)arg1;
- (id)waitingSubstateDictionaryRepresentation;
- (unsigned long long)waitingSubstateForMediaType:(unsigned long long)arg1;

@end
