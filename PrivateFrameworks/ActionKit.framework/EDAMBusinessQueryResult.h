
@interface EDAMBusinessQueryResult : FATObject {
    NSArray * _experts;
    NSArray * _matchingNotebooks;
    NSNumber * _totalNotebooks;
    NSDictionary * _totalNotesByNotebook;
}

@property (nonatomic, retain) NSArray *experts;
@property (nonatomic, retain) NSArray *matchingNotebooks;
@property (nonatomic, retain) NSNumber *totalNotebooks;
@property (nonatomic, retain) NSDictionary *totalNotesByNotebook;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)experts;
- (id)matchingNotebooks;
- (void)setExperts:(id)arg1;
- (void)setMatchingNotebooks:(id)arg1;
- (void)setTotalNotebooks:(id)arg1;
- (void)setTotalNotesByNotebook:(id)arg1;
- (id)totalNotebooks;
- (id)totalNotesByNotebook;

@end
