
@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {
    NFApplet * _applet;
    NSString * _appletIdentifier;
    bool  _background;
    NSString * _keyIdentifier;
    unsigned short  _paymentMode;
    unsigned short  _selectStatus;
    NSString * _spIdentifier;
}

@property (nonatomic, readonly, retain) NFApplet *applet;
@property (nonatomic, readonly) bool background;
@property (nonatomic, readonly, retain) NSString *keyIdentifier;
@property (nonatomic, readonly) unsigned short paymentMode;
@property (nonatomic, readonly) unsigned short selectStatus;
@property (nonatomic, readonly, retain) NSString *spIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setApplet:(id)arg1;
- (id)applet;
- (id)appletIdentifier;
- (id)asDictionary;
- (bool)background;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)keyIdentifier;
- (unsigned short)paymentMode;
- (unsigned short)selectStatus;
- (void)setKeyIdentifier:(id)arg1;
- (id)spIdentifier;

@end
