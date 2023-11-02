
@interface _UIScrollViewAsyncScrollDecelerationState : NSObject {
    bool  _deliveredFinishedDecelerating;
    NSMutableArray * _enqueuedCompletionResults;
    double  _lastUpdateTime;
    UIScrollEvent * _scrollEvent;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

- (void).cxx_destruct;

@end
