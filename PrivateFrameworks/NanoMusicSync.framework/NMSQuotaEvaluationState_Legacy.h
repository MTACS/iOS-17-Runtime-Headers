
@interface NMSQuotaEvaluationState_Legacy : NSObject {
    long long  _containerIndex;
    NSString * _externalLibraryIdentifier;
    long long  _itemIndex;
    unsigned long long  _itemSize;
    unsigned long long  _listQuota;
    unsigned long long  _listTotalSize;
    NSNumber * _mediaLibraryIdentifier;
}

@property (nonatomic) long long containerIndex;
@property (nonatomic, retain) NSString *externalLibraryIdentifier;
@property (nonatomic) long long itemIndex;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long listQuota;
@property (nonatomic) unsigned long long listTotalSize;
@property (nonatomic, retain) NSNumber *mediaLibraryIdentifier;

- (void).cxx_destruct;
- (long long)containerIndex;
- (id)externalLibraryIdentifier;
- (long long)itemIndex;
- (unsigned long long)itemSize;
- (unsigned long long)listQuota;
- (unsigned long long)listTotalSize;
- (id)mediaLibraryIdentifier;
- (void)setContainerIndex:(long long)arg1;
- (void)setExternalLibraryIdentifier:(id)arg1;
- (void)setItemIndex:(long long)arg1;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setListQuota:(unsigned long long)arg1;
- (void)setListTotalSize:(unsigned long long)arg1;
- (void)setMediaLibraryIdentifier:(id)arg1;

@end
