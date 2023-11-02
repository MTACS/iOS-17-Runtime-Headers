
@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSCopying, NSSecureCoding> {
    NSData * _blob;
    NSString * _instanceName;
    NSData * _txtRecordData;
}

@property (nonatomic, copy) NSData *blob;
@property (nonatomic, copy) NSString *instanceName;
@property (nonatomic, copy) NSData *txtRecordData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blob;
- (bool)blobEquals:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceName;
- (bool)instanceNameEquals:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBlob:(id)arg1;
- (void)setInstanceName:(id)arg1;
- (void)setTxtRecordData:(id)arg1;
- (id)txtRecordData;
- (bool)txtRecordEquals:(id)arg1;

@end
