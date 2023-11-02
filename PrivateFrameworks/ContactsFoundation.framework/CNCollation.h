
@interface CNCollation : NSObject {
    NSArray * _headerLanguages;
    bool  _indexExtraTokenizations;
    NSArray * _indexSections;
    NSString * _nameTransform;
    NSString * _searchCollatorIdentifier;
    NSString * _searchTransform;
    NSString * _sortCollatorIdentifier;
}

@property (readonly) NSArray *headerLanguages;
@property (readonly) bool indexExtraTokenizations;
@property (readonly) NSArray *indexSections;
@property (readonly) NSString *nameTransform;
@property (readonly) NSString *searchCollatorIdentifier;
@property (readonly) NSString *searchTransform;
@property (readonly) NSString *sortCollatorIdentifier;

+ (id)defaultSortCollatorIdentifier;
+ (id)indexSectionsFromPropertyList:(id)arg1;
+ (id)languageHeaderSectionsFromPropertyList:(id)arg1 collator:(struct UCollator { }*)arg2;
+ (id)sectionURL;

- (void).cxx_destruct;
- (id)headerLanguages;
- (bool)indexExtraTokenizations;
- (id)indexSections;
- (id)init;
- (id)initWithCollator:(struct UCollator { }*)arg1;
- (id)initWithCollator:(struct UCollator { }*)arg1 URL:(id)arg2;
- (id)nameTransform;
- (id)searchCollatorIdentifier;
- (id)searchTransform;
- (id)sortCollatorIdentifier;

@end
