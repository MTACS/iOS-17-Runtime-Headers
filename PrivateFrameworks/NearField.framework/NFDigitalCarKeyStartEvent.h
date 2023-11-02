
@interface NFDigitalCarKeyStartEvent : NSObject <NSSecureCoding> {
    NFApplet * _applet;
    NSString * _appletIdentifier;
    NSString * _keyIdentifier;
    NSString * _spIdentifier;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSString *spIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setApplet:(id)arg1;
- (id)applet;
- (id)asDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromContactlessPaymentStartEvent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyIdentifier;
- (id)spIdentifier;

@end
