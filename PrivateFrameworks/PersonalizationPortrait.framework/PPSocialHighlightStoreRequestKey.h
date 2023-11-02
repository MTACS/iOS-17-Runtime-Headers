
@interface PPSocialHighlightStoreRequestKey : NSObject <NSCopying> {
    NSString * _client;
    unsigned long long  _limit;
    NSString * _variant;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) NSString *variant;

+ (id)socialHighlightStoreRequestKeyWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3;

- (void).cxx_destruct;
- (id)client;
- (id)copyWithReplacementClient:(id)arg1;
- (id)copyWithReplacementLimit:(unsigned long long)arg1;
- (id)copyWithReplacementVariant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSocialHighlightStoreRequestKey:(id)arg1;
- (unsigned long long)limit;
- (id)variant;

@end
