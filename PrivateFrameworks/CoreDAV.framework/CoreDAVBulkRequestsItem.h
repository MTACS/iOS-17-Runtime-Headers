
@interface CoreDAVBulkRequestsItem : CoreDAVItem {
    CoreDAVLeafItem * _maxResourcesItem;
    CoreDAVLeafItem * _maxSizeItem;
    NSMutableSet * _supportedItems;
}

@property (nonatomic, readonly) NSDictionary *dictRepresentation;
@property (nonatomic, readonly) long long maxResources;
@property (nonatomic, retain) CoreDAVLeafItem *maxResourcesItem;
@property (nonatomic, readonly) long long maxSize;
@property (nonatomic, retain) CoreDAVLeafItem *maxSizeItem;
@property (nonatomic, readonly) NSSet *supportedItems;
@property (nonatomic, readonly) bool supportsDelete;
@property (nonatomic, readonly) bool supportsInsert;
@property (nonatomic, readonly) bool supportsUpdate;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addSupportedItem:(id)arg1;
- (id)description;
- (id)dictRepresentation;
- (id)init;
- (long long)maxResources;
- (id)maxResourcesItem;
- (long long)maxSize;
- (id)maxSizeItem;
- (void)setMaxResourcesItem:(id)arg1;
- (void)setMaxSizeItem:(id)arg1;
- (id)supportedItems;
- (bool)supportsDelete;
- (bool)supportsInsert;
- (bool)supportsItemWithNameSpace:(id)arg1 name:(id)arg2;
- (bool)supportsUpdate;

@end
