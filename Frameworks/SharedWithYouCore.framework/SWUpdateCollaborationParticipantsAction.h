
@interface SWUpdateCollaborationParticipantsAction : SWAction <NSCopying, NSSecureCoding> {
    NSArray * _addedIdentities;
    SWCollaborationMetadata * _collaborationMetadata;
    NSArray * _removedIdentities;
}

@property (nonatomic, retain) NSArray *addedIdentities;
@property (nonatomic, retain) SWCollaborationMetadata *collaborationMetadata;
@property (nonatomic, retain) NSArray *removedIdentities;

+ (id)actionWithMetadata:(id)arg1 addedIdentities:(id)arg2 removedIdentites:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedIdentities;
- (id)collaborationMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSActionSettings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationAction:(id)arg1;
- (id)initWithMetadata:(id)arg1 addedIdentities:(id)arg2 removedIdentites:(id)arg3;
- (bool)isEqualToAction:(id)arg1;
- (id)removedIdentities;
- (void)setAddedIdentities:(id)arg1;
- (void)setCollaborationMetadata:(id)arg1;
- (void)setRemovedIdentities:(id)arg1;

@end
