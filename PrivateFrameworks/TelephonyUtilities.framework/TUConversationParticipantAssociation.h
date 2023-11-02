
@interface TUConversationParticipantAssociation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _avcIdentifier;
    unsigned long long  _identifier;
}

@property (nonatomic, copy) NSString *avcIdentifier;
@property (nonatomic) unsigned long long identifier;

+ (id)avcIdentifierFromURLComponents:(id)arg1 namePrefix:(id)arg2;
+ (id)identifierFromURLComponents:(id)arg1 namePrefix:(id)arg2;
+ (id)participantAssociationFromURLComponents:(id)arg1 namePrefix:(id)arg2;
+ (id)queryItemName:(id)arg1 prefix:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avcIdentifier;
- (id)avcIdentifierQueryItemWithNamePrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)identifierQueryItemWithNamePrefix:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipantAssociation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParticipantAssociation:(id)arg1;
- (id)queryItemsWithNamePrefix:(id)arg1;
- (void)setAvcIdentifier:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;

@end
