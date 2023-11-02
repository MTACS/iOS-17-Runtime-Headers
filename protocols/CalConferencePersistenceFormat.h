
@protocol CalConferencePersistenceFormat

@required

- (NSArray *)deserializeConferences:(NSString *)arg1;
- (NSString *)serializeConference:(CalVirtualConference *)arg1 serializationBlockTitle:(NSString *)arg2;
- (bool)supportsSerializingConferenceWithSource:(unsigned long long)arg1;

@end
