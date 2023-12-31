
@interface PKRemoteThumbnailKey : NSObject <NSCopying> {
    NSDictionary * _requestDictionary;
    NSString * _requestIdentifier;
}

@property (nonatomic, retain) NSDictionary *requestDictionary;
@property (nonatomic, retain) NSString *requestIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteThumbnailKey:(id)arg1;
- (id)requestDictionary;
- (id)requestIdentifier;
- (void)setRequestDictionary:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;

@end
