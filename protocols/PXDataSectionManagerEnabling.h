
@protocol PXDataSectionManagerEnabling <NSObject>

@required

- (PXDataSectionEnablementForwarder *)enablementForwarder;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setEnablementForwarder:(PXDataSectionEnablementForwarder *)arg1;

@end
