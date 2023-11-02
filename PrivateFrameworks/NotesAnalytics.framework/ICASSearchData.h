
@interface ICASSearchData : NSObject <AADataEventType> {
    NSString * _searchSessionID;
}

@property (nonatomic, readonly) NSString *searchSessionID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSearchSessionID:(id)arg1;
- (id)searchSessionID;
- (id)toDict;

@end
