
@interface MPMediaLibraryEntityTranslationContext : NSObject <NSCopying> {
    NSArray * _allowedEntityIdentifiers;
    NSString * _filterText;
    unsigned long long  _filteringOptions;
    MPMediaLibrary * _mediaLibrary;
    MPModelKind * _modelKind;
    bool  _multiQuery;
    NSString * _personID;
    NSArray * _propertyFilters;
    NSArray * _scopedContainers;
    bool  _sortUsingAllowedEntityIdentifiers;
}

@property (nonatomic, retain) NSArray *allowedEntityIdentifiers;
@property (nonatomic, retain) NSString *filterText;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPModelKind *modelKind;
@property (getter=isMultiQuery, nonatomic) bool multiQuery;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) NSArray *propertyFilters;
@property (nonatomic, retain) NSArray *scopedContainers;
@property (nonatomic) bool sortUsingAllowedEntityIdentifiers;

- (void).cxx_destruct;
- (id)allowedEntityIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filterText;
- (unsigned long long)filteringOptions;
- (bool)isMultiQuery;
- (id)mediaLibrary;
- (id)modelKind;
- (id)personID;
- (id)propertyFilters;
- (id)scopedContainers;
- (void)setAllowedEntityIdentifiers:(id)arg1;
- (void)setFilterText:(id)arg1;
- (void)setFilteringOptions:(unsigned long long)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setModelKind:(id)arg1;
- (void)setMultiQuery:(bool)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPropertyFilters:(id)arg1;
- (void)setScopedContainers:(id)arg1;
- (void)setSortUsingAllowedEntityIdentifiers:(bool)arg1;
- (bool)sortUsingAllowedEntityIdentifiers;

@end
