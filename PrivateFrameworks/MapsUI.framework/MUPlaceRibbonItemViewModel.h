
@interface MUPlaceRibbonItemViewModel : NSObject {
    NSString * _preferredAccessibilityValue;
    bool  _tappable;
    id /* block */  _titleStringProvider;
    long long  _type;
    NSString * _typeStringForAX;
    <MUPlaceRibbonItemViewModelUpdateDelegate> * _updateDelegate;
    id /* block */  _valueStringProvider;
}

@property (nonatomic, copy) NSString *preferredAccessibilityValue;
@property (getter=isTappable, nonatomic) bool tappable;
@property (nonatomic, copy) id /* block */ titleStringProvider;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSString *typeStringForAX;
@property (nonatomic) <MUPlaceRibbonItemViewModelUpdateDelegate> *updateDelegate;
@property (nonatomic, copy) id /* block */ valueStringProvider;

+ (id)amenityItemViewForMapItem:(id)arg1 amenityItemConfiguration:(id)arg2;
+ (id)costItemViewForMapItem:(id)arg1;
+ (id)distanceFromCurrentLocationItemViewModelForDistanceString:(id)arg1;
+ (id)distanceFromCurrentLocationItemViewModelForMapItem:(id)arg1 currentLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
+ (id)factoidItemForFactoid:(id)arg1;
+ (id)guidesItemViewModelForMapItem:(id)arg1;
+ (id)hoursItemViewModelForMapItem:(id)arg1;
+ (id)ratingSubmissionStatusViewModelForRatingState:(long long)arg1;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (bool)isTappable;
- (id)preferredAccessibilityValue;
- (void)setPreferredAccessibilityValue:(id)arg1;
- (void)setTappable:(bool)arg1;
- (void)setTitleStringProvider:(id /* block */)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeStringForAX:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)setValueStringProvider:(id /* block */)arg1;
- (id /* block */)titleStringProvider;
- (long long)type;
- (id)typeStringForAX;
- (id)updateDelegate;
- (id /* block */)valueStringProvider;

@end
