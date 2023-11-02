
@interface EDAMNoteCollectionCounts : FATObject {
    NSDictionary * _notebookCounts;
    NSDictionary * _tagCounts;
    NSNumber * _trashCount;
}

@property (nonatomic, retain) NSDictionary *notebookCounts;
@property (nonatomic, retain) NSDictionary *tagCounts;
@property (nonatomic, retain) NSNumber *trashCount;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)notebookCounts;
- (void)setNotebookCounts:(id)arg1;
- (void)setTagCounts:(id)arg1;
- (void)setTrashCount:(id)arg1;
- (id)tagCounts;
- (id)trashCount;

@end
