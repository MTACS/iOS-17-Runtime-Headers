
@interface EDAMBusinessQuery : FATObject {
    EDAMNoteFilter * _filter;
    NSNumber * _includeNotebooks;
    NSNumber * _includeNotesCounts;
    NSNumber * _numExperts;
}

@property (nonatomic, retain) EDAMNoteFilter *filter;
@property (nonatomic, retain) NSNumber *includeNotebooks;
@property (nonatomic, retain) NSNumber *includeNotesCounts;
@property (nonatomic, retain) NSNumber *numExperts;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)filter;
- (id)includeNotebooks;
- (id)includeNotesCounts;
- (id)numExperts;
- (void)setFilter:(id)arg1;
- (void)setIncludeNotebooks:(id)arg1;
- (void)setIncludeNotesCounts:(id)arg1;
- (void)setNumExperts:(id)arg1;

@end
