
@interface DRSRequestStats : NSObject {
    NSMutableDictionary * __childStats;
    NSMutableArray * __requests;
    NSString * _descriptionString;
}

@property (nonatomic, readonly) NSMutableDictionary *_childStats;
@property (nonatomic, readonly) NSMutableArray *_requests;
@property (nonatomic, readonly) NSDictionary *childStats;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) unsigned long long logSizeBytes;
@property (nonatomic, readonly) unsigned long long requestCount;
@property (nonatomic, readonly) NSArray *requests;

+ (Class)childStatsClass;
+ (id)descriptionStringForChildStats:(id)arg1;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (void).cxx_destruct;
- (void)_addChildRequest:(id)arg1;
- (id)_childStats;
- (id)_debugDescription:(unsigned long long)arg1;
- (id)_requests;
- (bool)addRequest:(id)arg1;
- (id)childStats;
- (id)debugDescription;
- (id)descriptionString;
- (id)initWithDescriptionString:(id)arg1;
- (unsigned long long)logSizeBytes;
- (unsigned long long)requestCount;
- (id)requests;

@end
