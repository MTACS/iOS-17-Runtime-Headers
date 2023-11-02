
@protocol _INPBRequestPaymentIntent <NSObject>

@required

- (_INPBCurrencyAmount *)currencyAmount;
- (bool)hasCurrencyAmount;
- (bool)hasIntentMetadata;
- (bool)hasNote;
- (bool)hasPayer;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBString *)note;
- (_INPBContact *)payer;
- (void)setCurrencyAmount:(_INPBCurrencyAmount *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setNote:(_INPBString *)arg1;
- (void)setPayer:(_INPBContact *)arg1;

@end
