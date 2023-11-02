
@interface SADeviceControlStopScreenRecording : SABaseClientBoundCommand

+ (id)stopScreenRecording;
+ (id)stopScreenRecordingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
