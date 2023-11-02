
@interface EDSearchableIndexUpdates : NSObject <EFPubliclyDescribable> {
    NSArray * _itemsRequiringIndexing;
    NSArray * _removedDomainIdentifiers;
    NSArray * _removedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool hasUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *itemsRequiringIndexing;
@property (nonatomic, copy) NSArray *removedDomainIdentifiers;
@property (nonatomic, copy) NSArray *removedIdentifiers;
@property (readonly) Class superclass;

+ (id)updates;

- (void).cxx_destruct;
- (id)description;
- (id)ef_publicDescription;
- (bool)hasUpdates;
- (id)itemsRequiringIndexing;
- (id)removedDomainIdentifiers;
- (id)removedIdentifiers;
- (void)setItemsRequiringIndexing:(id)arg1;
- (void)setRemovedDomainIdentifiers:(id)arg1;
- (void)setRemovedIdentifiers:(id)arg1;

@end
