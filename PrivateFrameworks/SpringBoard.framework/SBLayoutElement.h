
@interface SBLayoutElement : NSObject <BSDescriptionProviding, NSCopying, SBLayoutElementDescriptor, SBWorkspaceEntityGenerating> {
    id /* block */  _entityGenerator;
    unsigned long long  _layoutAttributes;
    long long  _layoutRole;
    unsigned long long  _supportedLayoutRoles;
    NSString * _uniqueIdentifier;
    Class  _viewControllerClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ entityGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long layoutAttributes;
@property (nonatomic, readonly) long long layoutRole;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedLayoutRoles;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) Class viewControllerClass;

+ (id)elementWithDescriptor:(id)arg1;
+ (id)elementWithDescriptor:(id)arg1 layoutRole:(long long)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id /* block */)entityGenerator;
- (bool)hasLayoutAttributes:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 supportedLayoutRoles:(unsigned long long)arg3 layoutAttributes:(unsigned long long)arg4 viewControllerClass:(Class)arg5 entityGenerator:(id /* block */)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutAttributes;
- (long long)layoutRole;
- (bool)representsSameLayoutElementAsDescriptor:(id)arg1;
- (void)setEntityGenerator:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedLayoutRoles;
- (bool)supportsLayoutRole:(long long)arg1;
- (id)uniqueIdentifier;
- (Class)viewControllerClass;
- (id)workspaceEntity;

@end
