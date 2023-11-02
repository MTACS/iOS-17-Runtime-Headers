
@interface EDAMNoteFilter : FATObject {
    NSNumber * _ascending;
    NSString * _context;
    NSString * _emphasized;
    NSNumber * _inactive;
    NSNumber * _includeAllReadableNotebooks;
    NSString * _notebookGuid;
    NSNumber * _order;
    NSArray * _tagGuids;
    NSString * _timeZone;
    NSString * _words;
}

@property (nonatomic, retain) NSNumber *ascending;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSString *emphasized;
@property (nonatomic, retain) NSNumber *inactive;
@property (nonatomic, retain) NSNumber *includeAllReadableNotebooks;
@property (nonatomic, retain) NSString *notebookGuid;
@property (nonatomic, retain) NSNumber *order;
@property (nonatomic, retain) NSArray *tagGuids;
@property (nonatomic, retain) NSString *timeZone;
@property (nonatomic, retain) NSString *words;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)ascending;
- (id)context;
- (id)emphasized;
- (id)inactive;
- (id)includeAllReadableNotebooks;
- (id)notebookGuid;
- (id)order;
- (void)setAscending:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEmphasized:(id)arg1;
- (void)setInactive:(id)arg1;
- (void)setIncludeAllReadableNotebooks:(id)arg1;
- (void)setNotebookGuid:(id)arg1;
- (void)setOrder:(id)arg1;
- (void)setTagGuids:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWords:(id)arg1;
- (id)tagGuids;
- (id)timeZone;
- (id)words;

@end
