
@interface FKMapsMerchant : FKMapsItem <NSCopying> {
    CLLocation * _location;
    CNPostalAddress * _postalAddress;
}

@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) CNPostalAddress *postalAddress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 name:(id)arg3 phoneNumber:(id)arg4 url:(id)arg5 heroImageURL:(id)arg6 heroImageAttributionName:(id)arg7 category:(unsigned long long)arg8 mapsCategoryIdentifier:(id)arg9 encodedStylingInfo:(id)arg10 businessChatURL:(id)arg11 lastProcessedDate:(id)arg12 location:(id)arg13 postalAddress:(id)arg14;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)postalAddress;
- (void)setLocation:(id)arg1;
- (void)setPostalAddress:(id)arg1;

@end
