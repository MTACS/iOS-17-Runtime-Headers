
@interface SADeviceControlTakeScreenshot : SABaseClientBoundCommand

+ (id)takeScreenshot;
+ (id)takeScreenshotWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
