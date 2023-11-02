
@interface UVFenceHandle : NSObject <BSXPCSecureCoding> {
    BKSAnimationFenceHandle * _underlying;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BKSAnimationFenceHandle *underlying;

+ (id)createForAllScenes;
+ (id)createForScene:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)applyToAllScenes;
- (void)applyToScene:(id)arg1;
- (id)copy;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)fenceName;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithUnderlying:(id)arg1;
- (void)invalidate;
- (id)underlying;

@end
