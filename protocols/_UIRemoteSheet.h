
@protocol _UIRemoteSheet <NSObject>

@required

- (void)_setSheetConfiguration:(_UISheetPresentationControllerConfiguration *)arg1;
- (void)_setViewClipsToBounds:(bool)arg1;
- (_UISheetPresentationControllerConfiguration *)_sheetConfiguration;
- (bool)_viewClipsToBounds;

@end
