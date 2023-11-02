
@interface TUConversationActivitySceneAssociationBehavior : NSObject <NSCopying, NSSecureCoding> {
    NSString * _preferredSceneSessionRole;
    bool  _shouldAssociateScene;
    NSString * _targetContentIdentifier;
}

@property (nonatomic, readonly, copy) NSString *preferredSceneSessionRole;
@property (nonatomic, readonly) bool shouldAssociateScene;
@property (nonatomic, readonly, copy) NSString *targetContentIdentifier;

+ (id)defaultBehavior;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetContentIdentifier:(id)arg1 shouldAssociateScene:(bool)arg2 preferredSceneSessionRole:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToSceneAssociationBehavior:(id)arg1;
- (id)preferredSceneSessionRole;
- (bool)shouldAssociateScene;
- (id)targetContentIdentifier;

@end
