
@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase {
    NSNumber * _payloadHide;
    NSString * _payloadPath;
}

@property (nonatomic, copy) NSNumber *payloadHide;
@property (nonatomic, copy) NSString *payloadPath;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPath:(id)arg1;
+ (id)buildWithPath:(id)arg1 withHide:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadHide;
- (id)payloadPath;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadHide:(id)arg1;
- (void)setPayloadPath:(id)arg1;

@end
