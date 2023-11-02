
@interface TLTimeline : NSObject <NSCopying, NSSecureCoding> {
    <TLTimelineDelegate> * _delegate;
    bool  _delegateRespondsToTimerFired;
    TLTimelineEntryNode * _leftmostNode;
    int  _notifyToken;
    TLTimelineWindow * _nowWindow;
    bool  _paused;
    TLTimelineEntryNode * _rightmostNode;
    NSTimer * _timer;
    bool  _updatesNowNodeOnSignificantTimeChange;
}

@property (nonatomic, readonly) NSDate *dateOfLastEntryInTimeline;
@property (nonatomic) <TLTimelineDelegate> *delegate;
@property (nonatomic, readonly) NSDate *endOfVisibilityForNowEntry;
@property (nonatomic, readonly) <TLTimelineEntry> *lastEntry;
@property (nonatomic, readonly) unsigned long long nodeCapacity;
@property (nonatomic, readonly) <TLTimelineEntry> *nowEntry;
@property (nonatomic) bool paused;
@property (nonatomic) bool updatesNowNodeOnSignificantTimeChange;

+ (id)TLTimelineSegmentFromSortedEntries:(id)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_nowEntry;
- (id)_nowNode;
- (void)_recycleAllNodes;
- (id)_rightmostDate;
- (void)_setupWithEntry:(id)arg1;
- (id)_sortedEntries:(id)arg1;
- (void)_timerFired;
- (void)_trimTimeline;
- (void)_updateNowWindow;
- (void)_updateTimer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfLastEntryInTimeline;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfVisibilityForNowEntry;
- (id)entriesWithinDateInterval:(id)arg1;
- (void)extendRightFromDate:(id)arg1 withEntries:(id)arg2;
- (void)extendTimelineFromDate:(id)arg1 withEntries:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntry:(id)arg1;
- (id)initWithWindow:(id)arg1 paused:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastEntry;
- (unsigned long long)nodeCapacity;
- (id)nowEntry;
- (id)nowWindow;
- (bool)paused;
- (void)resetWithEntry:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setUpdatesNowNodeOnSignificantTimeChange:(bool)arg1;
- (bool)updatesNowNodeOnSignificantTimeChange;

@end
