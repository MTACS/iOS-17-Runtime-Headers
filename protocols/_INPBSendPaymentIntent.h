
@protocol _INPBSendPaymentIntent <NSObject>

@required

- (_INPBCurrencyAmount *)currencyAmount;
- (bool)hasCurrencyAmount;
- (bool)hasIntentMetadata;
- (bool)hasNote;
- (bool)hasPayee;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBString *)note;
- (_INPBContact *)payee;
- (void)setCurrencyAmount:(_INPBCurrencyAmount *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setNote:(_INPBString *)arg1;
- (void)setPayee:(_INPBContact *)arg1;

@end
