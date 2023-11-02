
@interface EDAMNoteVersionId : FATObject {
    NSNumber * _lastEditorId;
    NSNumber * _saved;
    NSString * _title;
    NSNumber * _updateSequenceNum;
    NSNumber * _updated;
}

@property (nonatomic, retain) NSNumber *lastEditorId;
@property (nonatomic, retain) NSNumber *saved;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSNumber *updateSequenceNum;
@property (nonatomic, retain) NSNumber *updated;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)lastEditorId;
- (id)saved;
- (void)setLastEditorId:(id)arg1;
- (void)setSaved:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)title;
- (id)updateSequenceNum;
- (id)updated;

@end
