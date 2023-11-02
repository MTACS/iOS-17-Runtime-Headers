
@interface EDQueryCreator : NSObject {
    NSString * _queryType;
}

@property (nonatomic, readonly) NSString *queryType;

- (void).cxx_destruct;
- (id)initWithQueryType:(id)arg1;
- (id)queryType;
- (id)queryWithStartDate:(id)arg1 endDate:(id)arg2;

@end
