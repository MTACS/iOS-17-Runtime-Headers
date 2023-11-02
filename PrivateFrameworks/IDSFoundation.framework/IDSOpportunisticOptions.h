
@interface IDSOpportunisticOptions : NSObject <NSSecureCoding> {
    NSArray * _blocklistedDestinations;
    bool  _destinationsMustBeInContacts;
    NSDate * _expiryDate;
}

@property (nonatomic, retain) NSArray *blocklistedDestinations;
@property (nonatomic) bool destinationsMustBeInContacts;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSDate *expiryDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blocklistedDestinations;
- (id)description;
- (bool)destinationsMustBeInContacts;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)init;
- (id)initWithBlocklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setBlocklistedDestinations:(id)arg1;
- (void)setDestinationsMustBeInContacts:(bool)arg1;
- (void)setExpiryDate:(id)arg1;

@end
