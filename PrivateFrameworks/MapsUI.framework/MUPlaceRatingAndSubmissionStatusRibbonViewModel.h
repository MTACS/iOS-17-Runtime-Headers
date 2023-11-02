
@interface MUPlaceRatingAndSubmissionStatusRibbonViewModel : MUPlaceRibbonItemViewModel {
    MKMapItem * _mapItem;
    MUPlaceCallToActionAppearance * _submissionStatus;
}

@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;

- (void).cxx_destruct;
- (bool)_canBeRated;
- (long long)_ratingState;
- (void)_updateStringProviders;
- (id)initWithMapItem:(id)arg1 submissionStatus:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTappable;
- (id)mapItem;
- (void)setSubmissionStatus:(id)arg1;
- (id)submissionStatus;
- (id)typeStringForAX;

@end
