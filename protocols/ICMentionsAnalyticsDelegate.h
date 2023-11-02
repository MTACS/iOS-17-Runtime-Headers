
@protocol ICMentionsAnalyticsDelegate <NSObject>

@required

- (void)mentionInsertedInNote:(ICNote *)arg1 mentionID:(NSString *)arg2 participantID:(NSString *)arg3 viaAutoComplete:(bool)arg4;

@end
