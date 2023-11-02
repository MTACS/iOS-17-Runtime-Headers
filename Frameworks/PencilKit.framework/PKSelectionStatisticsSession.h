
@interface PKSelectionStatisticsSession : NSObject {
    NSString * _lastActionTaken;
    long long  _lastContentType;
    long long  _lastSelectionType;
    NSString * _lastSignificantActionTaken;
    long long  _numberOfTimesSelectionWasClearedInASession;
    NSMutableArray * _selectionActions;
    long long  _selectionGestureCount;
    NSMutableArray * _selectionGestures;
    NSDate * _startTime;
    double  _timeSpentSelecting;
}

@property (nonatomic, retain) NSString *lastActionTaken;
@property (nonatomic) long long lastContentType;
@property (nonatomic) long long lastSelectionType;
@property (nonatomic, retain) NSString *lastSignificantActionTaken;
@property (nonatomic) long long numberOfTimesSelectionWasClearedInASession;
@property (nonatomic, readonly) NSDictionary *selectionActionDictionary;
@property (nonatomic) long long selectionGestureCount;
@property (nonatomic, readonly) NSDictionary *selectionGestureDictionary;
@property (nonatomic) double timeSpentSelecting;

- (void).cxx_destruct;
- (id)init;
- (id)lastActionTaken;
- (long long)lastContentType;
- (long long)lastSelectionType;
- (id)lastSignificantActionTaken;
- (void)logGesture:(long long)arg1 selectionType:(long long)arg2 contentType:(long long)arg3;
- (void)logSelectionAction:(long long)arg1;
- (long long)numberOfTimesSelectionWasClearedInASession;
- (id)selectionActionDictionary;
- (long long)selectionGestureCount;
- (id)selectionGestureDictionary;
- (void)setLastActionTaken:(id)arg1;
- (void)setLastContentType:(long long)arg1;
- (void)setLastSelectionType:(long long)arg1;
- (void)setLastSignificantActionTaken:(id)arg1;
- (void)setNumberOfTimesSelectionWasClearedInASession:(long long)arg1;
- (void)setSelectionGestureCount:(long long)arg1;
- (void)setTimeSpentSelecting:(double)arg1;
- (double)timeSpentSelecting;

@end
