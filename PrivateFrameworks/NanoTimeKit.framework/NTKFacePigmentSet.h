
@interface NTKFacePigmentSet : NSObject {
    NSDictionary * _collectionBySlots;
    NSString * _domain;
}

@property (nonatomic, copy) NSDictionary *collectionBySlots;
@property (nonatomic, readonly) NSArray *defaultGalleryColors;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, readonly) bool hasMultipleSlots;
@property (nonatomic, readonly) long long numberOfSlots;

+ (id)facePigmentSetFromProtoBuffer:(id)arg1 sharedCollections:(id)arg2;

- (void).cxx_destruct;
- (id)collectionBySlots;
- (id)collectionForSlot:(id)arg1;
- (id)defaultGalleryColors;
- (id)description;
- (id)domain;
- (bool)hasMultipleSlots;
- (bool)isEqual:(id)arg1;
- (long long)numberOfItemsForAllSlots;
- (long long)numberOfSlots;
- (id)pigmentSet;
- (id)pigmentsFromMostRecentAddableCollectionForSlot:(id)arg1;
- (id)pigmentsFromMostRecentAddableCollectionsForSlot:(id)arg1;
- (id)protoBuffer;
- (void)setCollectionBySlots:(id)arg1;
- (void)setDomain:(id)arg1;

@end
