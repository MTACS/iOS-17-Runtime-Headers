
@interface _UIScrollViewVFD : NSObject <_UIUpdateCompletionObserving> {
    unsigned int  _activeSubreasons;
    _UIScrollViewFPSHUD * _debugOverlay;
    struct CGPoint { 
        double x; 
        double y; 
    }  _displayedOrigin;
    unsigned long long  _displayedPresentationTime;
    struct _UIScrollViewVFDLookupState { 
        struct CAFrameRateRange {} *staticRateRangePrevious; 
        struct CAFrameRateRange {} *staticRateRangeCurrent; 
        unsigned short staticRateRangeFramesPrevious; 
        unsigned short staticRateRangeFramesCurrent; 
    }  _lookupState;
    UIScrollView * _scrollView;
    struct _UIUpdateRequestRecord { 
        struct _UIUpdateRequest {} *request; 
        unsigned int reason; 
    }  _updateRecord;
    struct _UIUpdateRequest { 
        unsigned int flags; 
        unsigned int minRate; 
        unsigned int preferredRate; 
        unsigned int maxRate; 
        unsigned long long phase; 
        unsigned long long load; 
    }  _updateRequest;
}

- (void).cxx_destruct;
- (void)_updateCompleted;
- (void)dealloc;

@end
