
@interface RMSPairingCredentials : NSObject {
    unsigned long long  _characterCount;
    unsigned long long  _requirementType;
}

@property (nonatomic) unsigned long long characterCount;
@property (nonatomic) unsigned long long requirementType;

- (unsigned long long)characterCount;
- (id)initWithProtobuf:(id)arg1;
- (id)protobuf;
- (unsigned long long)requirementType;
- (void)setCharacterCount:(unsigned long long)arg1;
- (void)setRequirementType:(unsigned long long)arg1;

@end
