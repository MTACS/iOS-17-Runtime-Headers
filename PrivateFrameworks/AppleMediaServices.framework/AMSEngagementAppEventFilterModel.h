
@interface AMSEngagementAppEventFilterModel : NSObject {
    NSDictionary * _definition;
}

@property (nonatomic, readonly) bool allowsResponse;
@property (nonatomic, readonly) unsigned long long components;
@property (nonatomic, readonly) NSDictionary *definition;

+ (bool)matchEvent:(id)arg1 toFilter:(id)arg2;

- (void).cxx_destruct;
- (bool)allowsResponse;
- (unsigned long long)components;
- (id)definition;
- (id)exportObject;
- (id)init;
- (id)initWithCacheObject:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (bool)matchesEvent:(id)arg1;

@end
