
@protocol TSWPTextDelegate

@required

- (TSWPPadding *)padding;
- (unsigned int)verticalAlignment;

@optional

- (bool)adjustColumnOriginForAlignment;
- (bool)forceWesternLineBreaking;

@end
