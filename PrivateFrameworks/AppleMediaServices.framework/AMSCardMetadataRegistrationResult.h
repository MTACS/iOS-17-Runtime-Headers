
@interface AMSCardMetadataRegistrationResult : NSObject {
    NSString * _cardArtwork;
    NSData * _cardArtworkData;
    long long  _cardType;
    NSString * _descriptionLong;
    NSString * _descriptionShort;
    NSDictionary * _dictionary;
    NSString * _passTypeIdentifier;
    long long  _paymentNetwork;
    NSString * _serialNumber;
    NSString * _suffix;
}

@property (nonatomic, retain) NSString *cardArtwork;
@property (nonatomic, retain) NSData *cardArtworkData;
@property (nonatomic) long long cardType;
@property (nonatomic, retain) NSString *descriptionLong;
@property (nonatomic, retain) NSString *descriptionShort;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic) long long paymentNetwork;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) NSString *suffix;

- (void).cxx_destruct;
- (id)cardArtwork;
- (id)cardArtworkData;
- (long long)cardType;
- (id)descriptionLong;
- (id)descriptionShort;
- (id)dictionary;
- (id)init;
- (id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7;
- (id)passTypeIdentifier;
- (long long)paymentNetwork;
- (id)serialNumber;
- (void)setCardArtwork:(id)arg1;
- (void)setCardArtworkData:(id)arg1;
- (void)setCardType:(long long)arg1;
- (void)setDescriptionLong:(id)arg1;
- (void)setDescriptionShort:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPaymentNetwork:(long long)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;

@end
