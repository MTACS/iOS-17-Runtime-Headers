
@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding> {
    NSDecimalNumber * _amount;
    NFApplet * _applet;
    NSString * _appletIdentifier;
    bool  _background;
    unsigned int  _command;
    NSString * _currency;
    bool  _didError;
    NSDictionary * _felicaInfo;
    unsigned short  _informative;
    NSString * _keyIdentifier;
    NSDictionary * _parsedInfo;
    NSString * _readerIdentifier;
    unsigned short  _result;
    unsigned short  _status;
    NSData * _tlv;
    NSString * _transactionIdentifier;
    unsigned short  _type;
}

@property (nonatomic, readonly, retain) NSDecimalNumber *amount;
@property (nonatomic, readonly, retain) NFApplet *applet;
@property (nonatomic, readonly) bool background;
@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly, retain) NSString *currency;
@property (nonatomic, readonly) bool didError;
@property (nonatomic, readonly, retain) NSDictionary *felicaInfo;
@property (nonatomic, readonly) unsigned short informative;
@property (nonatomic, readonly, retain) NSString *keyIdentifier;
@property (nonatomic, readonly, retain) NSDictionary *parsedInfo;
@property (nonatomic, readonly, retain) NSString *readerIdentifier;
@property (nonatomic, readonly) unsigned short result;
@property (nonatomic, readonly) unsigned short status;
@property (nonatomic, readonly, retain) NSData *tlv;
@property (nonatomic, readonly, retain) NSString *transactionIdentifier;
@property (nonatomic, readonly) unsigned short type;

+ (bool)logsTransactionDetails;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setApplet:(id)arg1;
- (id)amount;
- (id)applet;
- (id)appletIdentifier;
- (id)asDictionary;
- (bool)background;
- (unsigned int)command;
- (id)currency;
- (id)description;
- (bool)didError;
- (void)encodeWithCoder:(id)arg1;
- (id)felicaInfo;
- (unsigned short)informative;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)keyIdentifier;
- (id)parsedInfo;
- (id)readerIdentifier;
- (unsigned short)result;
- (unsigned short)status;
- (id)tlv;
- (id)transactionIdentifier;
- (unsigned short)type;

@end
