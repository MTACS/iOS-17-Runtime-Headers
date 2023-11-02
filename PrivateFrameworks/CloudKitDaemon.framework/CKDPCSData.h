
@interface CKDPCSData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _etag;
    struct _OpaquePCSShareProtection { } * _pcs;
    NSData * _pcsData;
    NSString * _pcsKeyID;
}

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, readonly) <NSSecureCoding> *itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*pcs;
@property (nonatomic, copy) NSData *pcsData;
@property (nonatomic, retain) NSString *pcsKeyID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1;
- (id)itemID;
- (struct _OpaquePCSShareProtection { }*)pcs;
- (id)pcsData;
- (id)pcsKeyID;
- (void)setEtag:(id)arg1;
- (void)setPcs:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPcsData:(id)arg1;
- (void)setPcsKeyID:(id)arg1;
- (bool)shouldEncodePCSData;

@end
