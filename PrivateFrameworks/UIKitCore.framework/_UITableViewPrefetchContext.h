
@interface _UITableViewPrefetchContext : NSObject {
    id /* block */  _cancelHandler;
    long long  _cancelThresholdCount;
    id /* block */  _cellHandler;
    id /* block */  _cellPruningHandler;
    double  _lastContentOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastVisibleIndexRange;
    long long  _maxIndex;
    NSMutableIndexSet * _outstandingRequests;
    long long  _prefetchItemCount;
    bool  _prefetchScheduled;
    long long  _refreshPrefetchThresholdCount;
    id /* block */  _requestHandler;
}

- (void).cxx_destruct;
- (int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withContentOffset:(double)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_offsetAndValidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 firstIndexOffset:(long long)arg2 lastIndexOffset:(long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_validatedRangeWithLocation:(long long)arg1 length:(long long)arg2;
- (id)computedPrefetchIndexSet;
- (id)description;

@end
