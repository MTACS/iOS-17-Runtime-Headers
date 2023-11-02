
@interface EDAMSearchRecord : FATObject {
    NSNumber * _noteCount;
    EDAMNoteFilter * _noteFilter;
    NSNumber * _noteRank;
    NSNumber * _searchScope;
    NSNumber * _searchTime;
    NSNumber * _selectTime;
    NSString * _selectedNoteGUID;
    NSString * _userQuery;
}

@property (nonatomic, retain) NSNumber *noteCount;
@property (nonatomic, retain) EDAMNoteFilter *noteFilter;
@property (nonatomic, retain) NSNumber *noteRank;
@property (nonatomic, retain) NSNumber *searchScope;
@property (nonatomic, retain) NSNumber *searchTime;
@property (nonatomic, retain) NSNumber *selectTime;
@property (nonatomic, retain) NSString *selectedNoteGUID;
@property (nonatomic, retain) NSString *userQuery;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noteCount;
- (id)noteFilter;
- (id)noteRank;
- (id)searchScope;
- (id)searchTime;
- (id)selectTime;
- (id)selectedNoteGUID;
- (void)setNoteCount:(id)arg1;
- (void)setNoteFilter:(id)arg1;
- (void)setNoteRank:(id)arg1;
- (void)setSearchScope:(id)arg1;
- (void)setSearchTime:(id)arg1;
- (void)setSelectTime:(id)arg1;
- (void)setSelectedNoteGUID:(id)arg1;
- (void)setUserQuery:(id)arg1;
- (id)userQuery;

@end
