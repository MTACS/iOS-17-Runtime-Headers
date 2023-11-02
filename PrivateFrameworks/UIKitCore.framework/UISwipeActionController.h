
@interface UISwipeActionController : NSObject <_UIScrollViewScrollObserver> {
    UIScrollView * _containerView;
    UISwipeOccurrence * _currentSwipeOccurrence;
    struct { 
        unsigned int didResetWhilePreparingSwipeOccurrence : 1; 
    }  _flags;
    UISwipeActionsConfiguration * _incomingSwipeActionsConfiguration;
    UISwipeOccurrence * _preparingSwipeOccurrence;
    unsigned long long  _style;
    <UISwipeActionHost> * _swipeActionHost;
    _UISwipeHandler * _swipeHandler;
    NSMutableSet * _swipeOccurrences;
}

@property (nonatomic) UIScrollView *containerView;
@property (nonatomic) UISwipeOccurrence *currentSwipeOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration;
@property (getter=_internalSwipeActionHost, nonatomic, readonly) <UISwipeActionHost_Internal> *internalSwipeActionHost;
@property (getter=_prefersRTL, nonatomic, readonly) bool prefersRTL;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic) <UISwipeActionHost> *swipeActionHost;
@property (nonatomic) bool swipeEnabled;
@property (nonatomic, retain) _UISwipeHandler *swipeHandler;
@property (nonatomic, retain) NSMutableSet *swipeOccurrences;
@property (nonatomic, readonly) NSIndexPath *swipedIndexPath;
@property (nonatomic, readonly) NSSet *swipedIndexPaths;
@property (nonatomic, readonly) UIView *swipedItemView;

- (void).cxx_destruct;
- (id)_existingSwipeOccurrenceForIndexPath:(id)arg1;
- (void)_handleDeleteOfSwipeOccurrence:(id)arg1;
- (id)_internalSwipeActionHost;
- (bool)_isSwipeForIndexPathFirstOccurrenceBeginningOrLastOccurrenceEnding:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (bool)_prefersRTL;
- (id)_swipeActionsConfigurationForSwipeDirection:(unsigned long long)arg1 indexPath:(id)arg2;
- (unsigned long long)_swipeDirectionForLeadingEdge:(bool)arg1;
- (id)_swipedViewForItemAtIndexPath:(id)arg1;
- (struct { unsigned long long x1; bool x2; bool x3; double x4; double x5; })configureForSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 startingAtTouchLocation:(struct CGPoint { double x1; double x2; })arg3;
- (id)containerView;
- (id)currentSwipeOccurrence;
- (void)dealloc;
- (void)deleteRowAtIndexPath:(id)arg1;
- (void)deleteSectionAtIndex:(unsigned long long)arg1;
- (id)incomingSwipeActionsConfiguration;
- (id)initWithSwipeActionHost:(id)arg1 style:(unsigned long long)arg2;
- (void)insertRowAtIndexPath:(id)arg1;
- (void)insertSectionAtIndex:(unsigned long long)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSectionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)prepareForSwipeDirection:(unsigned long long)arg1 startingAtTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)rebaseUnambiguousSwipeOccurrencesWithBlock:(id /* block */)arg1;
- (void)reconfigureActiveSwipeOccurrences;
- (void)reloadData;
- (void)resetSwipedItemAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setContainerView:(id)arg1;
- (void)setCurrentSwipeOccurrence:(id)arg1;
- (void)setIncomingSwipeActionsConfiguration:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSwipeActionHost:(id)arg1;
- (void)setSwipeEnabled:(bool)arg1;
- (void)setSwipeHandler:(id)arg1;
- (void)setSwipeOccurrences:(id)arg1;
- (unsigned long long)style;
- (id)swipeActionHost;
- (bool)swipeEnabled;
- (id)swipeHandler;
- (void)swipeHandler:(id)arg1 didConfirmSwipeWithInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg2;
- (void)swipeHandler:(id)arg1 didGenerateSwipeWithInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg2 isTracking:(bool)arg3;
- (bool)swipeHandler:(id)arg1 mayBeginSwipeAtLocation:(struct CGPoint { double x1; double x2; })arg2 withProposedDirection:(unsigned long long)arg3;
- (void)swipeHandlerDidBeginSwipe:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swipeHandlerRestingFrame:(id)arg1;
- (void)swipeItemAtIndexPath:(id)arg1 configuration:(id)arg2 direction:(unsigned long long)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)swipeOccurrence:(id)arg1 didChangeStateFrom:(long long)arg2;
- (void)swipeOccurrence:(id)arg1 willFinishWithDeletion:(bool)arg2;
- (void)swipeOccurrenceDidFinish:(id)arg1;
- (id)swipeOccurrences;
- (id)swipedIndexPath;
- (id)swipedIndexPaths;
- (id)swipedItemView;
- (bool)touchAtLocationShouldDismissSwipedItem:(struct CGPoint { double x1; double x2; })arg1 isTouchUp:(bool)arg2;
- (void)updateLayout;

@end
