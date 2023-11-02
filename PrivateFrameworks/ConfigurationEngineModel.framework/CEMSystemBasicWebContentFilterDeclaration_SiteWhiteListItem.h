
@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase {
    NSString * _payloadAddress;
    NSString * _payloadBookmarkPath;
    NSString * _payloadPageTitle;
}

@property (nonatomic, copy) NSString *payloadAddress;
@property (nonatomic, copy) NSString *payloadBookmarkPath;
@property (nonatomic, copy) NSString *payloadPageTitle;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithAddress:(id)arg1;
+ (id)buildWithAddress:(id)arg1 withPageTitle:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAddress;
- (id)payloadBookmarkPath;
- (id)payloadPageTitle;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAddress:(id)arg1;
- (void)setPayloadBookmarkPath:(id)arg1;
- (void)setPayloadPageTitle:(id)arg1;

@end
