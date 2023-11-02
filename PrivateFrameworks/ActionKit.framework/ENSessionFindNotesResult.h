
@interface ENSessionFindNotesResult : NSObject {
    NSDate * _created;
    bool  _hasResources;
    ENNoteRef * _noteRef;
    ENNotebook * _notebook;
    NSString * _title;
    int  _updateSequenceNum;
    NSDate * _updated;
}

@property (nonatomic, retain) NSDate *created;
@property (nonatomic) bool hasResources;
@property (nonatomic, retain) ENNoteRef *noteRef;
@property (nonatomic, retain) ENNotebook *notebook;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int updateSequenceNum;
@property (nonatomic, retain) NSDate *updated;

- (void).cxx_destruct;
- (id)created;
- (id)description;
- (bool)hasResources;
- (id)noteRef;
- (id)notebook;
- (void)setCreated:(id)arg1;
- (void)setHasResources:(bool)arg1;
- (void)setNoteRef:(id)arg1;
- (void)setNotebook:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdateSequenceNum:(int)arg1;
- (void)setUpdated:(id)arg1;
- (id)title;
- (int)updateSequenceNum;
- (id)updated;

@end
