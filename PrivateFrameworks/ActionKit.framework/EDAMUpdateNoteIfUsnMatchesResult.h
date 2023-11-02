
@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject {
    EDAMNote * _note;
    NSNumber * _updated;
}

@property (nonatomic, retain) EDAMNote *note;
@property (nonatomic, retain) NSNumber *updated;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)note;
- (void)setNote:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)updated;

@end
