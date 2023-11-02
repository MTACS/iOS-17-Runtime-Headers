
@interface FCReferenceToMembership : NSObject {
    NSString * _identifier;
    NSString * _membershipID;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *membershipID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (id)membershipID;

@end
