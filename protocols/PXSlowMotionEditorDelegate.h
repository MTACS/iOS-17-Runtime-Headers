
@protocol PXSlowMotionEditorDelegate <NSObject>

@required

- (void)slowMotionEditorDidBeginEditing:(PXSlowMotionEditor *)arg1 withStartHandle:(bool)arg2;
- (void)slowMotionEditorDidEndEditing:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorEndValueChanged:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorRequestForceUnzoom:(PXSlowMotionEditor *)arg1;
- (bool)slowMotionEditorRequestForceZoom:(PXSlowMotionEditor *)arg1;
- (void)slowMotionEditorStartValueChanged:(PXSlowMotionEditor *)arg1;

@end
