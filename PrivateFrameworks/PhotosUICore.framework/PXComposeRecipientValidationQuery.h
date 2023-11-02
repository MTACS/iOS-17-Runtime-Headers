
@interface PXComposeRecipientValidationQuery : NSObject <NSCopying> {
    NSString * _address;
    long long  _addressKind;
    PXComposeRecipient * _composeRecipient;
    long long  _validationType;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly) long long addressKind;
@property (nonatomic, readonly) PXComposeRecipient *composeRecipient;
@property (nonatomic) long long validationType;

+ (id)new;

- (void).cxx_destruct;
- (id)address;
- (long long)addressKind;
- (id)composeRecipient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithComposeRecipient:(id)arg1 address:(id)arg2 addressKind:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)setValidationType:(long long)arg1;
- (long long)validationType;

@end
