
@interface CKVSpeechCategoryGroup : NSObject {
    NSSet * _itemTypes;
    NSSet * _speechCategories;
}

@property (nonatomic, readonly) NSSet *itemTypes;
@property (nonatomic, readonly) NSSet *speechCategories;

+ (id)_calculateGroupForItemTypeNumber:(id)arg1;
+ (id)_categoryToFieldTypeMap;
+ (id)_categoryToItemTypeCache;
+ (id)_itemTypesForSpeechCategory:(id)arg1;
+ (bool)_speechCategory:(id)arg1 hasFieldTypes:(id)arg2;
+ (id)all;
+ (id)groupForFieldTypes:(id)arg1;
+ (id)groupForItemType:(long long)arg1;
+ (id)groupForSpeechCategories:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItemTypes:(id)arg1 speechCategories:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpeechCategoryGroup:(id)arg1;
- (id)itemTypes;
- (id)speechCategories;
- (id)speechCategoriesDescription;

@end
