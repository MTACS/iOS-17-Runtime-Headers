
@interface ViewReuseManager : NSObject {
    bool  _alwaysSendPrepareForReuse;
    <ViewReuseManagerDelegate> * _delegate;
    long long  _firstPreviouslyVisibleRepresentedObjectIndex;
    Class  _reusableViewClass;
    NSMutableSet * _reusableViews;
    NSMutableArray * _trackedViews;
    NSMutableSet * _viewsPendingRecycling;
}

@property (nonatomic) bool alwaysSendPrepareForReuse;
@property (nonatomic) <ViewReuseManagerDelegate> *delegate;
@property (nonatomic, readonly) Class reusableViewClass;
@property (nonatomic, readonly, copy) NSArray *trackedViews;

- (void).cxx_destruct;
- (void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned long long)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_recycleView:(id)arg1;
- (void)_recycleViewsInCollection:(id)arg1;
- (bool)alwaysSendPrepareForReuse;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithReusableViewClass:(Class)arg1;
- (void)insertView:(id)arg1 inTrackedViewsAtIndex:(long long)arg2;
- (id)makeView;
- (void)recycleView:(id)arg1;
- (void)removeViewFromTrackedViews:(id)arg1;
- (Class)reusableViewClass;
- (void)setAlwaysSendPrepareForReuse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)trackedViews;
- (void)updateTrackedViewsForRepresentedObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
