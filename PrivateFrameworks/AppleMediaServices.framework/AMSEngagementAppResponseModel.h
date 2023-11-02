
@interface AMSEngagementAppResponseModel : NSObject {
    NSDate * _created;
    NSDictionary * _definition;
}

@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSDate *created;
@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSDictionary *responseData;

+ (bool)_shouldEvictDefinition:(id)arg1 created:(id)arg2;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)created;
- (id)definition;
- (id)exportObject;
- (id)initWithCacheObject:(id)arg1;
- (id)initWithData:(id)arg1 cacheInfo:(id)arg2;
- (bool)matchesEvent:(id)arg1;
- (id)responseData;

@end
