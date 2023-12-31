
@protocol MPStoreSocialRequestOperationDataSource <NSObject>

@required

- (NSString *)bagKey;
- (NSData *)httpBody;
- (long long)httpBodyType;
- (long long)httpMethod;
- (MPModelSocialPerson *)person;
- (NSArray *)queryItems;
- (void)setPerson:(MPModelSocialPerson *)arg1;

@optional

- (NSArray *)fallbackBagKeys;
- (NSString *)fallbackURLString;

@end
