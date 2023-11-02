
@interface NFDigitalCarKeyEndEvent : NSObject <NSSecureCoding> {
    NFApplet * _applet;
    NSString * _appletIdentifier;
    NSNumber * _brandCode;
    bool  _didError;
    NSString * _keyIdentifier;
    unsigned int  _result;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) NSNumber *brandCode;
@property (nonatomic, readonly) bool didError;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) unsigned int result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setApplet:(id)arg1;
- (id)applet;
- (id)appletIdentifier;
- (id)asDictionary;
- (id)brandCode;
- (id)description;
- (bool)didError;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromContactlessPaymentEndEvent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyIdentifier;
- (unsigned int)result;

@end
