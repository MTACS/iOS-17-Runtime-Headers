
@interface SGMIBiomeReducedMessageEvents : NSObject {
    double  _firstAppLaunchFollowingFetch;
    bool  _forwardDraftStarted;
    bool  _linkClicked;
    bool  _mailGotFlagged;
    bool  _markedAsJunk;
    bool  _markedAsRead;
    bool  _markedAsUnread;
    double  _messageFetchTime;
    unsigned int  _messageViewCount;
    double  _messageViewMaxDwellTime;
    double  _messageViewTotalDwellTime;
    unsigned int  _numberOfMailsViewedBeforeSinceAvailable;
    unsigned int  _numberOfMoreRecentUnreadMessageAtFirstViewTime;
    unsigned int  _numberOfUnreadMessageAtFirstViewTime;
    bool  _replyDraftStarted;
    bool  _scrolledToEnd;
    double  _timeBeforeViewStartSinceAvailable;
    bool  _userReplied;
}

@property (nonatomic, readonly) double firstAppLaunchFollowingFetch;
@property (nonatomic, readonly) bool forwardDraftStarted;
@property (nonatomic, readonly) bool linkClicked;
@property (nonatomic, readonly) bool mailGotFlagged;
@property (nonatomic, readonly) bool markedAsJunk;
@property (nonatomic, readonly) bool markedAsRead;
@property (nonatomic, readonly) bool markedAsUnread;
@property (nonatomic, readonly) double messageFetchTime;
@property (nonatomic, readonly) unsigned int messageViewCount;
@property (nonatomic, readonly) double messageViewMaxDwellTime;
@property (nonatomic, readonly) double messageViewTotalDwellTime;
@property (nonatomic, readonly) unsigned int numberOfMailsViewedBeforeSinceAvailable;
@property (nonatomic, readonly) unsigned int numberOfMoreRecentUnreadMessageAtFirstViewTime;
@property (nonatomic, readonly) unsigned int numberOfUnreadMessageAtFirstViewTime;
@property (nonatomic, readonly) bool replyDraftStarted;
@property (nonatomic, readonly) bool scrolledToEnd;
@property (nonatomic, readonly) double timeBeforeViewStartSinceAvailable;
@property (nonatomic, readonly) bool userReplied;

- (double)firstAppLaunchFollowingFetch;
- (bool)forwardDraftStarted;
- (void)incrementNumberOfMailsViewedBeforeSinceAvailable;
- (void)incrementNumberOfMoreRecentUnreadMessageAtFirstViewTime;
- (id)init;
- (id)initWithScrolledToEnd:(bool)arg1 messageViewMaxDwellTime:(double)arg2 messageViewTotalDwellTime:(double)arg3 messageViewCount:(unsigned int)arg4 timeBeforeViewStartSinceAvailable:(double)arg5 numberOfMailsViewedBeforeSinceAvailable:(unsigned int)arg6 userReplied:(bool)arg7 replyDraftStarted:(bool)arg8 forwardDraftStarted:(bool)arg9 numberOfUnreadMessageAtFirstViewTime:(unsigned int)arg10 numberOfMoreRecentUnreadMessageAtFirstViewTime:(unsigned int)arg11 markedAsRead:(bool)arg12 markedAsUnread:(bool)arg13 markedAsJunk:(bool)arg14 mailGotFlagged:(bool)arg15 linkClicked:(bool)arg16;
- (bool)linkClicked;
- (bool)mailGotFlagged;
- (bool)markedAsJunk;
- (bool)markedAsRead;
- (bool)markedAsUnread;
- (double)messageAvailableTime;
- (double)messageFetchTime;
- (unsigned int)messageViewCount;
- (double)messageViewMaxDwellTime;
- (double)messageViewTotalDwellTime;
- (unsigned int)numberOfMailsViewedBeforeSinceAvailable;
- (unsigned int)numberOfMoreRecentUnreadMessageAtFirstViewTime;
- (unsigned int)numberOfUnreadMessageAtFirstViewTime;
- (bool)replyDraftStarted;
- (bool)scrolledToEnd;
- (double)timeBeforeViewStartSinceAvailable;
- (void)updateWithAppLaunchAtTime:(double)arg1;
- (void)updateWithEvent:(id)arg1 eventTimestamp:(double)arg2;
- (void)updateWithFlagChangedEvent;
- (void)updateWithMessageFetchedEventAtTime:(double)arg1;
- (void)updateWithMessageMovedEventWithPayload:(id)arg1;
- (void)updateWithReadChangedEventWithPayload:(id)arg1;
- (void)updateWithViewEndWithPayload:(id)arg1;
- (void)updateWithViewStartAtTime:(double)arg1 unreadMessageCount:(unsigned int)arg2;
- (bool)userReplied;

@end
