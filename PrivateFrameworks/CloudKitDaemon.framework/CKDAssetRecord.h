
@interface CKDAssetRecord : NSObject {
    NSMutableDictionary * _itemsByRecordKey;
    CKRecordID * _recordID;
    NSString * _recordType;
    NSNumber * _rerefSizeUpperBoundNumber;
    NSMutableDictionary * _rereferencedItemsByRecordKey;
    NSMutableDictionary * _sectionItemsByRecordKey;
    NSNumber * _sizeUpperBoundNumber;
}

@property (nonatomic, readonly) NSArray *allMMCSItems;
@property (nonatomic, readonly) NSArray *allMMCSSectionItems;
@property (nonatomic, retain) NSMutableDictionary *itemsByRecordKey;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) NSString *recordType;
@property (readonly) unsigned int rerefSizeUpperBound;
@property (nonatomic, retain) NSNumber *rerefSizeUpperBoundNumber;
@property (nonatomic, retain) NSMutableDictionary *rereferencedItemsByRecordKey;
@property (nonatomic, retain) NSMutableDictionary *sectionItemsByRecordKey;
@property (readonly) unsigned int sizeUpperBound;
@property (nonatomic, retain) NSNumber *sizeUpperBoundNumber;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (id)allMMCSAndSectionItems;
- (id)allMMCSItems;
- (id)allMMCSSectionItems;
- (id)allRecordKeys;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)arg1;
- (id)allRereferenceMMCSItems;
- (id)description;
- (id)firstMMCSItemError;
- (id)firstMMCSSectionItemError;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (bool)isAssetRecord;
- (bool)isEmpty;
- (bool)isEmptyOfRereferencesAssets;
- (bool)isPackageSectionRecord;
- (id)itemsByRecordKey;
- (id)recordID;
- (id)recordType;
- (unsigned int)rerefSizeUpperBound;
- (id)rerefSizeUpperBoundNumber;
- (id)rereferencedItemsByRecordKey;
- (id)sectionItemsByRecordKey;
- (void)setItemsByRecordKey:(id)arg1;
- (void)setRerefSizeUpperBoundNumber:(id)arg1;
- (void)setRereferencedItemsByRecordKey:(id)arg1;
- (void)setSectionItemsByRecordKey:(id)arg1;
- (void)setSizeUpperBoundNumber:(id)arg1;
- (unsigned int)sizeUpperBound;
- (id)sizeUpperBoundNumber;

@end
