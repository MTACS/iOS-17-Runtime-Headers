
@interface QSSMutableUpdateAudioInfo : QSSUpdateAudioInfo

@property (nonatomic, copy) NSString *product_id;
@property (nonatomic, copy) NSString *vendor_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)product_id;
- (void)setProduct_id:(id)arg1;
- (void)setVendor_id:(id)arg1;
- (id)vendor_id;

@end
