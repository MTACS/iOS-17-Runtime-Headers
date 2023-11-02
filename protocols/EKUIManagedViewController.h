
@protocol EKUIManagedViewController <NSObject>

@required

- (bool)canManagePresentationStyle;
- (bool)wantsManagement;

@optional

- (bool)canBeDirectlyManaged;
- (bool)canRequirePushOrPresentation;
- (bool)prefersPushForSizeClass:(long long)arg1;

@end
