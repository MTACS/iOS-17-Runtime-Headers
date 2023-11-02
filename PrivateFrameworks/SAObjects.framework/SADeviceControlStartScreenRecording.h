
@interface SADeviceControlStartScreenRecording : SABaseClientBoundCommand

+ (id)startScreenRecording;
+ (id)startScreenRecordingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
