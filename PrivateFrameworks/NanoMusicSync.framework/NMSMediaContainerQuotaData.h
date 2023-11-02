
@interface NMSMediaContainerQuotaData : NSObject {
    bool  _hasRemovedItems;
    bool  _hasSkippedItems;
    unsigned long long  _numItemsAdded;
    id  _quotaRefObj;
}

@property (nonatomic, readonly) bool hasItemsAboveQuota;
@property (nonatomic) bool hasRemovedItems;
@property (nonatomic) bool hasSkippedItems;
@property (nonatomic) unsigned long long numItemsAdded;
@property (nonatomic) id quotaRefObj;

- (void).cxx_destruct;
- (bool)hasItemsAboveQuota;
- (bool)hasRemovedItems;
- (bool)hasSkippedItems;
- (unsigned long long)numItemsAdded;
- (id)quotaRefObj;
- (void)setHasRemovedItems:(bool)arg1;
- (void)setHasSkippedItems:(bool)arg1;
- (void)setNumItemsAdded:(unsigned long long)arg1;
- (void)setQuotaRefObj:(id)arg1;

@end
