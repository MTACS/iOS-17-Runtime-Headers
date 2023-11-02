
@protocol EDReadLaterCloudStorageDateProvider

@required

- (NSDate *)cloudStorageReadLaterDateForMessage:(id <EDPersistedMessage>)arg1 displayDate:(id*)arg2;

@end
