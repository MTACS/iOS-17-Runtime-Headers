
@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding> {
    CNChangeHistoryAnchor * _changeAnchor;
    NSNumber * _changeID;
    long long  _changeType;
    NSString * _externalID;
    NSString * _externalModificationTag;
    NSString * _externalURI;
    CNGroup * _group;
    NSString * _groupIdentifier;
}

@property (nonatomic, retain) CNChangeHistoryAnchor *changeAnchor;
@property (nonatomic, retain) NSNumber *changeID;
@property (nonatomic) long long changeType;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSString *externalModificationTag;
@property (nonatomic, retain) NSString *externalURI;
@property (nonatomic, retain) CNGroup *group;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeAnchor;
- (id)changeID;
- (long long)changeType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalURI;
- (id)group;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5;
- (void)setChangeAnchor:(id)arg1;
- (void)setChangeID:(id)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setGroup:(id)arg1;

@end
