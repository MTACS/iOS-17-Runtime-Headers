
@interface PKPaymentTransactionArchive : NSObject {
    NSString * _identifier;
    NSSet * _locations;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSSet *locations;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (bool)allArchiveLocationsWithType:(unsigned long long)arg1 areArchived:(bool)arg2;
- (id)archiveLocationMatchingLocation:(id)arg1;
- (id)archiveLocationsWithCloudStoreZone:(id)arg1 isArchived:(bool)arg2;
- (id)archiveLocationsWithType:(unsigned long long)arg1 isArchived:(bool)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (void)insertOrUpdateArchiveLocationWithCloudStoreZone:(id)arg1 isArchived:(bool)arg2 insertionMode:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArchive:(id)arg1;
- (id)locations;
- (void)setIdentifier:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)updateArchiveLocationsWithType:(unsigned long long)arg1 isArchived:(bool)arg2;
- (void)updateTransactionArchiveLocationsWithArchive:(id)arg1 type:(unsigned long long)arg2 archived:(bool)arg3;

@end
