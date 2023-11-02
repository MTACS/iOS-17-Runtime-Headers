
@protocol SessionManagerXPCProtocol <SessionManagerXPCProtocol_iOS>

@required

- (void)createAudioApplicationForSpecification:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: AVAudioApplicationSpecification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned int, void*
- (void)getApplicationMessages:(void *)arg1 clientID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: struct { unsigned int x1[8]; }, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)getApplicationProperty:(void *)arg1 clientID:(void *)arg2 propertyID:(void *)arg3 isMXProperty:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 12: struct { unsigned int x1[8]; }, unsigned int, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, <NSSecureCoding> *, unsigned int, void*
- (void)pingWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)sessionIDs:(void *)arg1 clientID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: struct { unsigned int x1[8]; }, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)setApplicationProperty:(void *)arg1 clientID:(void *)arg2 propertyID:(void *)arg3 propertyValue:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: struct { unsigned int x1[8]; }, unsigned int, NSString *, <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setMXPropertyOnAllSessions:(void *)arg1 clientID:(void *)arg2 MXProperty:(void *)arg3 values:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: struct { unsigned int x1[8]; }, unsigned int, NSString *, <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sleepWithReply:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)toggleInputMuteForRecordingProcess:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateApplicationProperty:(void *)arg1 clientID:(void *)arg2 propertyID:(void *)arg3 propertyValue:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: struct { unsigned int x1[8]; }, unsigned int, NSString *, <NSSecureCoding> *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
