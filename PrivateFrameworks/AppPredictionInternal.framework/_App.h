
@interface _App : NSObject {
    NSArray * _appMarqueeGroups;
    NSString * _bundleId;
    ATXNotificationDigestRankingConstants * _c;
    <ATXNotificationDigestFeedbackProtocol> * _digestFeedback;
    double  _digestRankingScore;
    NSArray * _groups;
    NSArray * _groupsWithComms;
    NSArray * _groupsWithCommsWithPreviewableAttachment;
    NSArray * _groupsWithCommsWithoutPreviewableAttachment;
    NSArray * _groupsWithoutComms;
    NSArray * _groupsWithoutCommsWithPreviewableAttachment;
    NSArray * _groupsWithoutCommsWithoutPreviewableAttachment;
    unsigned long long  _maxAppMarqueeGroups;
    NSArray * _nonAppMarqueeGroups;
}

@property (nonatomic, readonly) NSArray *appMarqueeGroups;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) double digestRankingScore;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSArray *groupsWithComms;
@property (nonatomic, readonly) NSArray *groupsWithCommsWithPreviewableAttachment;
@property (nonatomic, readonly) NSArray *groupsWithCommsWithoutPreviewableAttachment;
@property (nonatomic, readonly) NSArray *groupsWithoutComms;
@property (nonatomic, readonly) NSArray *groupsWithoutCommsWithPreviewableAttachment;
@property (nonatomic, readonly) NSArray *groupsWithoutCommsWithoutPreviewableAttachment;
@property (nonatomic, readonly) NSArray *nonAppMarqueeGroups;

- (void).cxx_destruct;
- (id)appMarqueeGroups;
- (id)bundleId;
- (double)digestRankingScore;
- (id)getGroupsFromNotificationStacks:(id)arg1;
- (id)groups;
- (id)groupsWithComms;
- (id)groupsWithCommsWithPreviewableAttachment;
- (id)groupsWithCommsWithoutPreviewableAttachment;
- (id)groupsWithoutComms;
- (id)groupsWithoutCommsWithPreviewableAttachment;
- (id)groupsWithoutCommsWithoutPreviewableAttachment;
- (id)initWithNotificationStacks:(id)arg1 maxAppMarqueeGroups:(unsigned long long)arg2 digestFeedback:(id)arg3;
- (double)logisticScoreForInput:(double)arg1;
- (id)nonAppMarqueeGroups;
- (void)setBundleId;
- (double)setDigestRankingScore;
- (void)setRankedGroupsFromNotificationGroups:(id)arg1;

@end
