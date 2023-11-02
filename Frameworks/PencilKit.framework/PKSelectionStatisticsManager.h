
@interface PKSelectionStatisticsManager : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastContentOffset;
    PKSelectionStatisticsSession * _selectionSession;
}

+ (id)sharedStatisticsManager;

- (void).cxx_destruct;
- (void)_endSelectionSession;
- (void)_recordSelectionSession:(id)arg1;
- (void)logEndSelectionSessionIfNecessary;
- (void)logScrollEventWithContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)logSelectionAction:(long long)arg1;
- (void)recordDidMakeSelectionWithType:(long long)arg1;
- (void)recordLassoSelectionEventWithContentType:(long long)arg1;
- (void)recordSmartSelectionEventWithType:(long long)arg1 contentType:(long long)arg2 gestureInvoked:(long long)arg3;

@end
