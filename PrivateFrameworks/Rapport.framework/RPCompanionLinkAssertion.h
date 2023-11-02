
@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding> {
    NSString * _assertionID;
    RPCompanionLinkClient * _client;
    NSString * _destinationID;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *assertionID;
@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (nonatomic, copy) NSString *destinationID;
@property (nonatomic, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assertionID;
- (id)client;
- (id)description;
- (id)destinationID;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)setAssertionID:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end