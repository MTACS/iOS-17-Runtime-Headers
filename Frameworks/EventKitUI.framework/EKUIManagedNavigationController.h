
@interface EKUIManagedNavigationController : UINavigationController <EKUIManagedViewController> {
    bool  _forceCanBeDirectlyManagedToNo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCanBeDirectlyManagedToNo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canBeDirectlyManaged;
- (bool)canManagePresentationStyle;
- (bool)forceCanBeDirectlyManagedToNo;
- (bool)prefersPushForSizeClass:(long long)arg1;
- (void)setForceCanBeDirectlyManagedToNo:(bool)arg1;
- (bool)wantsManagement;

@end
