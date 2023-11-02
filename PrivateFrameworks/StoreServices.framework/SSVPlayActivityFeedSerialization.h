
@interface SSVPlayActivityFeedSerialization : NSObject {
    NSString * _currentStoreFrontID;
}

@property (nonatomic, copy) NSString *currentStoreFrontID;

+ (id)defaultOverrideHTTPHeaderFields;

- (void).cxx_destruct;
- (id)currentStoreFrontID;
- (id)propertyListObjectWithPlayActivityEvent:(id)arg1;
- (void)setCurrentStoreFrontID:(id)arg1;

@end
