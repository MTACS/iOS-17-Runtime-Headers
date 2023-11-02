
@interface PKPaymentTransactionArchiveLocation : NSObject <NSCopying, NSSecureCoding> {
    bool  _archived;
    PKCloudStoreZone * _cloudStoreZone;
    unsigned long long  _type;
}

@property (getter=isArchived, nonatomic) bool archived;
@property (nonatomic, retain) PKCloudStoreZone *cloudStoreZone;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudStoreZone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 archived:(bool)arg2 cloudStoreZone:(id)arg3;
- (bool)isArchived;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArchiveLocation:(id)arg1;
- (void)setArchived:(bool)arg1;
- (void)setCloudStoreZone:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
