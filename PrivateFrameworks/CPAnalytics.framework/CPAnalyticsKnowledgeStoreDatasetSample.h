
@interface CPAnalyticsKnowledgeStoreDatasetSample : NSObject {
    NSDate * _date;
    NSString * _identifier;
    NSString * _subset;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *subset;

- (void).cxx_destruct;
- (id)date;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3;
- (id)metadata;
- (id)subset;

@end
