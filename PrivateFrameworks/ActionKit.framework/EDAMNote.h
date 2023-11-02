
@interface EDAMNote : FATObject {
    NSNumber * _active;
    EDAMNoteAttributes * _attributes;
    NSString * _content;
    NSData * _contentHash;
    NSNumber * _contentLength;
    NSNumber * _created;
    NSNumber * _deleted;
    NSString * _guid;
    EDAMNoteLimits * _limits;
    NSString * _notebookGuid;
    NSArray * _resources;
    EDAMNoteRestrictions * _restrictions;
    NSArray * _sharedNotes;
    NSArray * _tagGuids;
    NSArray * _tagNames;
    NSString * _title;
    NSNumber * _updateSequenceNum;
    NSNumber * _updated;
}

@property (nonatomic, retain) NSNumber *active;
@property (nonatomic, retain) EDAMNoteAttributes *attributes;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSData *contentHash;
@property (nonatomic, retain) NSNumber *contentLength;
@property (nonatomic, retain) NSNumber *created;
@property (nonatomic, retain) NSNumber *deleted;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) EDAMNoteLimits *limits;
@property (nonatomic, retain) NSString *notebookGuid;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic, retain) EDAMNoteRestrictions *restrictions;
@property (nonatomic, retain) NSArray *sharedNotes;
@property (nonatomic, retain) NSArray *tagGuids;
@property (nonatomic, retain) NSArray *tagNames;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSNumber *updateSequenceNum;
@property (nonatomic, retain) NSNumber *updated;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)active;
- (id)attributes;
- (id)content;
- (id)contentHash;
- (id)contentLength;
- (id)created;
- (id)deleted;
- (id)guid;
- (id)limits;
- (id)notebookGuid;
- (id)resources;
- (id)restrictions;
- (void)setActive:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentHash:(id)arg1;
- (void)setContentLength:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDeleted:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setLimits:(id)arg1;
- (void)setNotebookGuid:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setSharedNotes:(id)arg1;
- (void)setTagGuids:(id)arg1;
- (void)setTagNames:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)sharedNotes;
- (id)tagGuids;
- (id)tagNames;
- (id)title;
- (id)updateSequenceNum;
- (id)updated;

@end
