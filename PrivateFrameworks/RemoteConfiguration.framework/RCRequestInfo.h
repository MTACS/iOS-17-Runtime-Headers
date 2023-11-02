
@interface RCRequestInfo : NSObject {
    NSArray * _additionalChangeTags;
    NSURL * _fallbackURL;
    NSMutableDictionary * _mutableAdditionalFields;
    NSString * _requestCacheKey;
    unsigned long long  _requestFeedType;
    NSString * _requestKey;
    unsigned long long  _requestType;
    NSString * _responseKey;
}

@property (nonatomic, readonly) NSArray *additionalChangeTags;
@property (readonly) NSDictionary *allAdditionalFields;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly) NSMutableDictionary *mutableAdditionalFields;
@property (nonatomic, readonly) NSString *requestCacheKey;
@property (nonatomic, readonly) unsigned long long requestFeedType;
@property (nonatomic, readonly, copy) NSString *requestKey;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly, copy) NSString *responseKey;

- (void).cxx_destruct;
- (id)additionalChangeTags;
- (id)allAdditionalFields;
- (id)description;
- (id)fallbackURL;
- (unsigned long long)hash;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 requestType:(unsigned long long)arg4 additionalChangeTags:(id)arg5 requestFeedType:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)mutableAdditionalFields;
- (id)requestCacheKey;
- (unsigned long long)requestFeedType;
- (id)requestKey;
- (unsigned long long)requestType;
- (id)responseKey;
- (void)setValue:(id)arg1 forAdditionalField:(id)arg2;

@end
