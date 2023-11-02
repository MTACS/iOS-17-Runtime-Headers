
@protocol _GCLogicalDevice <_GCDevice>

@required

- (_GCDeviceConfiguration *)configuration;
- (NSSet *)underlyingDevices;

@optional

- (void)activateLogical;
- (void)deactivateLogical;

@end
