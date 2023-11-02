
@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>

@required

- (NSDate *)dateOfStatus;
- (long long)expireStatusType;
- (long long)statusType;

@end
