
@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {
    NSString * _descriptionLeadInText;
    NSMutableArray * _posterRepresentations;
}

@property (nonatomic, readonly) NSString *descriptionLeadInText;

- (void).cxx_destruct;
- (id)descriptionLeadInText;
- (id)initWithDictionary:(id)arg1;
- (id)postersWithSession:(id)arg1;

@end
