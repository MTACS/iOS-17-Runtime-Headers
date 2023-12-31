
@interface SASSuspendClientEndpointer : SABaseClientBoundCommand

@property (nonatomic, copy) NSNumber *audioProcessedMs;
@property (nonatomic, copy) NSNumber *suspendDurationMs;

+ (id)suspendClientEndpointer;
+ (id)suspendClientEndpointerWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioProcessedMs;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAudioProcessedMs:(id)arg1;
- (void)setSuspendDurationMs:(id)arg1;
- (id)suspendDurationMs;

@end
