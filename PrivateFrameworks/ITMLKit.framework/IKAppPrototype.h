
@interface IKAppPrototype : NSObject {
    NSDictionary * _groupingValues;
    IKAppPrototypeIdentifier * _identifier;
    IKDOMPrototype * _prototype;
    NSMutableIndexSet * _usageIndexes;
}

@property (nonatomic, readonly, copy) NSDictionary *groupingValues;
@property (nonatomic, readonly) IKAppPrototypeIdentifier *identifier;
@property (nonatomic, readonly) IKDOMPrototype *prototype;
@property (nonatomic, readonly, copy) NSIndexSet *usageIndexes;

- (void).cxx_destruct;
- (id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2;
- (void)addUsageForIndex:(long long)arg1;
- (void)dsepm_setViewElement:(id)arg1;
- (id)dsepm_viewElement;
- (id)groupingValues;
- (id)identifier;
- (id)initWithPrototype:(id)arg1 dataItem:(id)arg2;
- (id)prototype;
- (void)removeUsageForIndex:(long long)arg1;
- (void)updateUsageIndexesWithChangeSet:(id)arg1;
- (id)usageIndexes;

@end
