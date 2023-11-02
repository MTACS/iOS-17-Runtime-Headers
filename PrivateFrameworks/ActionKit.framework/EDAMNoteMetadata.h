
@interface EDAMNoteMetadata : FATObject {
    EDAMNoteAttributes * _attributes;
    NSNumber * _contentLength;
    NSNumber * _created;
    NSNumber * _deleted;
    NSString * _guid;
    NSString * _largestResourceMime;
    NSNumber * _largestResourceSize;
    NSString * _notebookGuid;
    NSArray * _tagGuids;
    NSString * _title;
    NSNumber * _updateSequenceNum;
    NSNumber * _updated;
}

@property (nonatomic, retain) EDAMNoteAttributes *attributes;
@property (nonatomic, retain) NSNumber *contentLength;
@property (nonatomic, retain) NSNumber *created;
@property (nonatomic, retain) NSNumber *deleted;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *largestResourceMime;
@property (nonatomic, retain) NSNumber *largestResourceSize;
@property (nonatomic, retain) NSString *notebookGuid;
@property (nonatomic, retain) NSArray *tagGuids;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSNumber *updateSequenceNum;
@property (nonatomic, retain) NSNumber *updated;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)attributes;
- (id)contentLength;
- (id)created;
- (id)deleted;
- (id)guid;
- (id)largestResourceMime;
- (id)largestResourceSize;
- (id)notebookGuid;
- (void)setAttributes:(id)arg1;
- (void)setContentLength:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDeleted:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setLargestResourceMime:(id)arg1;
- (void)setLargestResourceSize:(id)arg1;
- (void)setNotebookGuid:(id)arg1;
- (void)setTagGuids:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)tagGuids;
- (id)title;
- (id)updateSequenceNum;
- (id)updated;

@end
