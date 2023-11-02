
@protocol WFAppInstalledResourceDelegate <NSObject>

@required

- (void)appInstalledResource:(WFAppInstalledResource *)arg1 didUpdateAppDescriptor:(INAppDescriptor *)arg2;

@end
