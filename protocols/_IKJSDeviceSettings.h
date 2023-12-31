
@protocol _IKJSDeviceSettings <IKJSDeviceSettings, JSExport>

@required

- (IKJSRestrictions *)Restrictions;
- (struct CGSize { double x1; double x2; })Screen;
- (NSString *)name;
- (NSString *)preferredVideoFormat;
- (NSString *)preferredVideoPreviewFormat;
- (struct CGSize { double x1; double x2; })screen;

@end
