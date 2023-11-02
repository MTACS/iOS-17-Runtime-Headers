
@interface STActivityAttribution : NSObject <BSDebugDescriptionProviding, BSDescriptionProviding, NSCopying, NSSecureCoding> {
    STAttributedEntity * _activeEntity;
    STAttributedEntity * _attributedEntity;
}

@property (nonatomic, readonly, copy) STAttributedEntity *activeEntity;
@property (nonatomic, readonly, copy) STAttributedEntity *attributedEntity;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

+ (id)attributionWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)attributionWithPID:(int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeEntity;
- (id)attributedEntity;
- (struct { unsigned int x1[8]; })auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttributedEntity:(id)arg1;
- (id)initWithAttributedEntity:(id)arg1 activeEntity:(id)arg2;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
