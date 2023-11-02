
@interface CATActiveIDSServiceConnectionContentKeepAlive : NSObject <CATActiveIDSServiceConnectionMessageContent>

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)arg1;

- (long long)contentType;
- (id)dictionaryValue;

@end
