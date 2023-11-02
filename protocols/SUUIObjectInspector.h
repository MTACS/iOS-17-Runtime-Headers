
@protocol SUUIObjectInspector <NSObject>

@required

- (void)beginSectionWithFriendlyName:(NSString *)arg1;
- (void)endSection;
- (void)exposePropertyWithFriendlyName:(NSString *)arg1 value:(id)arg2;
- (NSString *)friendlyName;
- (NSString *)information;
- (void)setFriendlyName:(NSString *)arg1;
- (void)setInformation:(NSString *)arg1;

@end
