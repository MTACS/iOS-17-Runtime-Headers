
@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying> {
    NSMutableArray * _transformReasonAssociations;
    NSMutableArray * _transforms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *transforms;

- (void).cxx_destruct;
- (id)_initWithTransformer:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)transforms;

@end
