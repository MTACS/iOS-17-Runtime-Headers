
@interface PKCarUnlockSupportedTerminal : NSObject <NSSecureCoding> {
    NSArray * _associatedApplicationIdentifiers;
    NSString * _manufacturerIdentifier;
    NSString * _partnerIdentifier;
    NSString * _partnerName;
    NSSet * _terminalCriteria;
}

@property (nonatomic, readonly, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, readonly, copy) NSString *manufacturerIdentifier;
@property (nonatomic, readonly, copy) NSString *partnerIdentifier;
@property (nonatomic, readonly, copy) NSString *partnerName;
@property (nonatomic, readonly, copy) NSSet *terminalCriteria;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedApplicationIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)manufacturerIdentifier;
- (id)partnerIdentifier;
- (id)partnerName;
- (id)terminalCriteria;
- (id)vehicleInitiatedPairingLaunchURLWithReferralSource:(unsigned long long)arg1;

@end
