
@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation {
    NSData * _APDUTemplate;
    NSString * _PIN;
    long long  _PINByteOffset;
    TKSmartCardPINFormat * _PINFormat;
    NSString * _localizedPINLabel;
    TKSmartCard * _smartCard;
}

@property (copy) NSData *APDUTemplate;
@property (copy) NSString *PIN;
@property long long PINByteOffset;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (copy) NSString *localizedPINLabel;
@property (retain) TKSmartCard *smartCard;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)APDUTemplate;
- (id)PIN;
- (long long)PINByteOffset;
- (id)PINFormat;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)arg1;
- (bool)finishWithError:(id*)arg1;
- (void)importOperation:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedPINLabel;
- (void)setAPDUTemplate:(id)arg1;
- (void)setLocalizedPINLabel:(id)arg1;
- (void)setPIN:(id)arg1;
- (void)setPINByteOffset:(long long)arg1;
- (void)setPINFormat:(id)arg1;
- (void)setSmartCard:(id)arg1;
- (id)smartCard;

@end
