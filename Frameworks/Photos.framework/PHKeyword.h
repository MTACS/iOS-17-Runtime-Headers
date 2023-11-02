
@interface PHKeyword : PHObject {
    NSString * _shortcut;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *shortcut;
@property (nonatomic, readonly) NSString *title;

+ (id)entityKeyMap;
+ (id)fetchKeywordsForAsset:(id)arg1 options:(id)arg2;
+ (id)fetchKeywordsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchKeywordsWithOptions:(id)arg1;
+ (id)fetchKeywordsWithTitles:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)shortcut;
- (id)title;

@end
