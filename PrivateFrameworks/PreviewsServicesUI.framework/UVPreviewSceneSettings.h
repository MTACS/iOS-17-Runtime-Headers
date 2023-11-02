
@interface UVPreviewSceneSettings : UIApplicationSceneSettings

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } previewMaximumSize;
@property (nonatomic, readonly) long long previewSceneLayout;

// Image: /System/Library/PrivateFrameworks/PreviewsServicesUI.framework/PreviewsServicesUI

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)makeMutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })previewMaximumSize;
- (long long)previewSceneLayout;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/PreviewShellKit.framework/PreviewShellKit

- (id)copyResettingInterruptionPolicy;

@end
