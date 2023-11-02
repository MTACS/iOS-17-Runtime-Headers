
@interface STMutableTelephonyMobileEquipmentInfo : STTelephonyMobileEquipmentInfo

@property (nonatomic, copy) NSString *CSN;
@property (nonatomic, copy) NSString *ICCID;
@property (nonatomic, copy) NSString *IMEI;
@property (nonatomic, copy) NSString *MEID;
@property (nonatomic, copy) NSString *bootstrapICCID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBootstrapICCID:(id)arg1;
- (void)setCSN:(id)arg1;
- (void)setICCID:(id)arg1;
- (void)setIMEI:(id)arg1;
- (void)setMEID:(id)arg1;

@end
