
@interface MTStoreIdentifier : NSObject {
    NSString * _feedUrl;
    NSNumber * _storeIdentifier;
}

@property (nonatomic, retain) NSString *feedUrl;
@property (nonatomic, retain) NSNumber *storeIdentifier;

+ (long long)adamIdFromSerpentId:(long long)arg1;
+ (id)adamIdNumberFromStoreId:(long long)arg1;
+ (id)identifierWithFeedUrl:(id)arg1;
+ (id)identifierWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;
+ (bool)isEmpty:(long long)arg1;
+ (bool)isEmptyNumber:(id)arg1;
+ (bool)isNotEmpty:(long long)arg1;
+ (bool)isNotEmptyNumber:(id)arg1;
+ (long long)serpentIdFromAdamId:(long long)arg1;
+ (id)validatedIdNumberFromStoreId:(long long)arg1;

- (void).cxx_destruct;
- (id)feedUrl;
- (id)initWithFeedUrl:(id)arg1;
- (id)initWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;
- (void)setFeedUrl:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeIdentifier;

@end
