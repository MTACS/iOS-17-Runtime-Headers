
@interface AMSBagURLQueryItemsBuilder : NSObject {
    void buildVariant;
    void clientInfo;
    void deviceClass;
    void operatingSystem;
    void operatingSystemVersion;
    void profile;
    void profileVersion;
}

+ (id)storefrontFromQueryItems:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;
- (id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 operatingSystem:(id)arg4 operatingSystemVersion:(id)arg5 deviceClass:(id)arg6 buildVariant:(id)arg7;
- (id)queryItemsWithCookies:(id)arg1 storefront:(id)arg2;

@end
