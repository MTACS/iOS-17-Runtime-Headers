
@interface ENNoteSearch : NSObject {
    NSString * _searchString;
}

@property (nonatomic, retain) NSString *searchString;

+ (id)noteSearchCreatedByThisApplication;
+ (id)noteSearchWithSearchString:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSearchString:(id)arg1;
- (id)searchString;
- (void)setSearchString:(id)arg1;

@end
