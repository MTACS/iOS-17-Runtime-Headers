
@interface ICNACoreAnalyticsReporter : ICNAOptedInObject {
    NSString * _currentlyViewedNoteIdentifier;
    NSString * _noteViewApproach;
}

@property (retain) NSString *currentlyViewedNoteIdentifier;
@property (retain) NSString *noteViewApproach;

+ (id)analyticsQueue;
+ (id)sharedReporter;

- (void).cxx_destruct;
- (void)appSessionWillEnd:(id)arg1;
- (id)consumeNoteViewApproach;
- (id)currentlyViewedNoteIdentifier;
- (void)fireDeepLinkCreationEventWithNote:(id)arg1 contentItem:(id)arg2;
- (void)fireNoteViewEventWithNote:(id)arg1 noteData:(id)arg2 noteContentData:(id)arg3;
- (void)fireSnapshotWithNoteReportToDevice:(id)arg1;
- (void)fireUpdateHandWritingContentEventWithNoteData:(id)arg1 pencilIsUsed:(bool)arg2;
- (id)init;
- (id)noteViewApproach;
- (void)setCurrentlyViewedNoteIdentifier:(id)arg1;
- (void)setNoteViewApproach:(id)arg1;

@end
