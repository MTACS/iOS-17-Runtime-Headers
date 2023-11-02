
@interface IDSServerMessagingIncomingContext : NSObject <NSSecureCoding> {
    IDSCertifiedDeliveryContext * _certifiedDeliveryContext;
    bool  _fromServerStorage;
    NSString * _identifier;
}

@property (nonatomic, retain) IDSCertifiedDeliveryContext *certifiedDeliveryContext;
@property (nonatomic) bool fromServerStorage;
@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certifiedDeliveryContext;
- (void)encodeWithCoder:(id)arg1;
- (bool)fromServerStorage;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromServerStorage:(bool)arg1 certifiedDeliveryContext:(id)arg2 identifier:(id)arg3;
- (void)setCertifiedDeliveryContext:(id)arg1;
- (void)setFromServerStorage:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end
