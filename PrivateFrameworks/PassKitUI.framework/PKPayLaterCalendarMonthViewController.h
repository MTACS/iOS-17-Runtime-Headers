
@interface PKPayLaterCalendarMonthViewController : UICollectionViewController <PKCalendarMonthAppearance, PKCalendarMonthDataSource, PKHorizontalScrollingChildLayoutDataSource, PKHorizontalScrollingChildViewControllerProtocol, UICollectionViewDelegateFlowLayout> {
    double  _alphaTransition;
    NSCalendar * _calendar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    long long  _contentInsetAdjustmentBehavior;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsett;
    NSDateFormatter * _dayFormatter;
    PKPayLaterInstallmentPresenter * _installmentPresenter;
    PKPayLaterInstallmentsMonth * _installmentsMonth;
    PKPayLaterInstallmentsMonthPresenter * _installmentsMonthPresenter;
    bool  _isLowEndDevice;
    PKHorizontalScrollingChildLayout * _layout;
    NSDateFormatter * _monthYearFormatter;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKDashboardTitleHeaderView * _sampleHeaderView;
    bool  _visible;
    NSDateFormatter * _weekdayFormatter;
    UIGestureRecognizer * gestureRecognizerRequiredToFail;
    <PKHorizontalScrollingViewControllerDelegate> * scrollingDelegate;
}

@property (nonatomic) double alphaTransition;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIGestureRecognizer *gestureRecognizerRequiredToFail;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKHorizontalScrollingViewControllerDelegate> *scrollingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_applyMaskToCell:(id)arg1 section:(long long)arg2 firstInSection:(bool)arg3 lastInSection:(bool)arg4;
- (void)_configureHeaderView:(id)arg1 inSection:(long long)arg2;
- (bool)_hasHeaderForSection:(long long)arg1;
- (id)_installmentItemForInstallment:(id)arg1;
- (double)alphaForIndexPath:(id)arg1 visible:(bool)arg2 transition:(double)arg3;
- (double)alphaTransition;
- (id)calendar;
- (id)calendarMonthStartDate;
- (bool)canSelectDate:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (long long)contentInsetAdjustmentBehavior;
- (id)data;
- (id)decorationViewForDayView:(id)arg1 date:(id)arg2;
- (id)footer;
- (id)gestureRecognizerRequiredToFail;
- (unsigned int)horizontalAlignmentForSection:(long long)arg1;
- (id)indexPathForCalendar;
- (id)initWithInstallmentsMonthPresenter:(id)arg1 installmentPresenter:(id)arg2 paymentIntentController:(id)arg3;
- (bool)isDateSelected:(id)arg1;
- (double)lineSpacingForSection:(long long)arg1;
- (unsigned long long)numberOfDaysInWeek;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)numberOfWeeks;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollingDelegate;
- (void)setAlphaTransition:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setData:(id)arg1 swap:(bool)arg2;
- (void)setGestureRecognizerRequiredToFail:(id)arg1;
- (void)setInstallmentsMonth:(id)arg1 swap:(bool)arg2;
- (void)setScrollingDelegate:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)shouldShowDate:(id)arg1;
- (id)stringForDay:(id)arg1;
- (id)stringForWeekday:(id)arg1;
- (void)viewDidLoad;
- (bool)visible;

@end
