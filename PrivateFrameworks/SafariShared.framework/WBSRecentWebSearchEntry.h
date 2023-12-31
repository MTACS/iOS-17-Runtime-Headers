
@interface WBSRecentWebSearchEntry : NSObject {
    NSDate * _date;
    NSString * _searchString;
}

@property (readonly) NSDate *date;
@property (readonly) NSString *searchString;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)searchString;

@end
