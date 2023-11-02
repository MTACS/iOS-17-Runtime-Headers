
@interface EDAMSearchSuggestionQuery : FATObject {
    EDAMNoteFilter * _contextFilter;
    NSString * _prefix;
}

@property (nonatomic, retain) EDAMNoteFilter *contextFilter;
@property (nonatomic, retain) NSString *prefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)contextFilter;
- (id)prefix;
- (void)setContextFilter:(id)arg1;
- (void)setPrefix:(id)arg1;

@end
