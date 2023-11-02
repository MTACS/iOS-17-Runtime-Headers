
@interface EDAMNoteList : FATObject {
    NSArray * _notes;
    NSArray * _searchedWords;
    NSNumber * _startIndex;
    NSArray * _stoppedWords;
    NSNumber * _totalNotes;
    NSNumber * _updateCount;
}

@property (nonatomic, retain) NSArray *notes;
@property (nonatomic, retain) NSArray *searchedWords;
@property (nonatomic, retain) NSNumber *startIndex;
@property (nonatomic, retain) NSArray *stoppedWords;
@property (nonatomic, retain) NSNumber *totalNotes;
@property (nonatomic, retain) NSNumber *updateCount;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)notes;
- (id)searchedWords;
- (void)setNotes:(id)arg1;
- (void)setSearchedWords:(id)arg1;
- (void)setStartIndex:(id)arg1;
- (void)setStoppedWords:(id)arg1;
- (void)setTotalNotes:(id)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)startIndex;
- (id)stoppedWords;
- (id)totalNotes;
- (id)updateCount;

@end
