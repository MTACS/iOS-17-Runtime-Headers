
@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet * _addressBookHomes;
    NSSet * _directoryGatewayURLs;
}

@property (nonatomic, readonly) NSSet *addressBookHomes;
@property (nonatomic, readonly) NSSet *directoryGatewayURLs;

- (void).cxx_destruct;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)addressBookHomes;
- (id)description;
- (id)directoryGatewayURL;
- (id)directoryGatewayURLs;
- (id)homeSet;

@end
