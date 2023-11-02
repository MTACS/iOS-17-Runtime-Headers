
@interface SWStartCollaborationAction : SWAction <NSCopying, NSSecureCoding> {
    SWCollaborationMetadata * _collaborationMetadata;
}

@property (nonatomic, retain) SWCollaborationMetadata *collaborationMetadata;

+ (id)actionWithMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSActionSettings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfillUsingURL:(id)arg1 collaborationIdentifier:(id)arg2;
- (void)fulfillUsingURL:(id)arg1 updatedMetadata:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationAction:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (bool)isEqualToAction:(id)arg1;
- (void)setCollaborationMetadata:(id)arg1;

@end
