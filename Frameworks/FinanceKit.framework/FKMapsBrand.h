
@interface FKMapsBrand : FKMapsItem <NSCopying> {
    NSURL * _logoURL;
}

@property (nonatomic, copy) NSURL *logoURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 name:(id)arg3 phoneNumber:(id)arg4 url:(id)arg5 heroImageURL:(id)arg6 heroImageAttributionName:(id)arg7 category:(unsigned long long)arg8 mapsCategoryIdentifier:(id)arg9 encodedStylingInfo:(id)arg10 businessChatURL:(id)arg11 lastProcessedDate:(id)arg12 logoURL:(id)arg13;
- (bool)isEqual:(id)arg1;
- (id)logoURL;
- (void)setLogoURL:(id)arg1;

@end
