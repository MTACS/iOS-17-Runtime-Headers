
@interface CEMSystemAllowedMediaDeclaration_MediaItems : CEMPayloadBase {
    NSString * _payloadAllMedia;
    NSArray * _payloadBd;
    NSArray * _payloadBlankbd;
    NSArray * _payloadBlankcd;
    NSArray * _payloadBlankdvd;
    NSArray * _payloadCd;
    NSArray * _payloadDiskImage;
    NSArray * _payloadDvd;
    NSArray * _payloadDvdram;
    NSArray * _payloadHarddiskExternal;
    NSArray * _payloadHarddiskInternal;
    NSArray * _payloadNetworkdisk;
}

@property (nonatomic, copy) NSString *payloadAllMedia;
@property (nonatomic, copy) NSArray *payloadBd;
@property (nonatomic, copy) NSArray *payloadBlankbd;
@property (nonatomic, copy) NSArray *payloadBlankcd;
@property (nonatomic, copy) NSArray *payloadBlankdvd;
@property (nonatomic, copy) NSArray *payloadCd;
@property (nonatomic, copy) NSArray *payloadDiskImage;
@property (nonatomic, copy) NSArray *payloadDvd;
@property (nonatomic, copy) NSArray *payloadDvdram;
@property (nonatomic, copy) NSArray *payloadHarddiskExternal;
@property (nonatomic, copy) NSArray *payloadHarddiskInternal;
@property (nonatomic, copy) NSArray *payloadNetworkdisk;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAllMedia:(id)arg1 withCd:(id)arg2 withDvd:(id)arg3 withBd:(id)arg4 withBlankcd:(id)arg5 withBlankdvd:(id)arg6 withBlankbd:(id)arg7 withDvdram:(id)arg8 withDiskImage:(id)arg9 withHarddiskInternal:(id)arg10 withHarddiskExternal:(id)arg11 withNetworkdisk:(id)arg12;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllMedia;
- (id)payloadBd;
- (id)payloadBlankbd;
- (id)payloadBlankcd;
- (id)payloadBlankdvd;
- (id)payloadCd;
- (id)payloadDiskImage;
- (id)payloadDvd;
- (id)payloadDvdram;
- (id)payloadHarddiskExternal;
- (id)payloadHarddiskInternal;
- (id)payloadNetworkdisk;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllMedia:(id)arg1;
- (void)setPayloadBd:(id)arg1;
- (void)setPayloadBlankbd:(id)arg1;
- (void)setPayloadBlankcd:(id)arg1;
- (void)setPayloadBlankdvd:(id)arg1;
- (void)setPayloadCd:(id)arg1;
- (void)setPayloadDiskImage:(id)arg1;
- (void)setPayloadDvd:(id)arg1;
- (void)setPayloadDvdram:(id)arg1;
- (void)setPayloadHarddiskExternal:(id)arg1;
- (void)setPayloadHarddiskInternal:(id)arg1;
- (void)setPayloadNetworkdisk:(id)arg1;

@end
