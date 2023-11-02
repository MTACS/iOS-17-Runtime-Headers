
@interface MUPlaceItemHeaderViewModel : MUPlaceHeaderViewModel {
    MKDistanceFormatter * _distanceFormatter;
    <_MKPlaceItem> * _placeItem;
}

@property (nonatomic, readonly) bool isUserSpecificPlaceItem;
@property (nonatomic, readonly) bool showNearbyStringForContactPlaceItem;

- (void).cxx_destruct;
- (id)_formattedDistanceString;
- (id)_userSpecificPlaceSecondaryName;
- (id)addressDescriptionForContact;
- (id)enclosingPlaceAttributedStringWithFont:(id)arg1 labelColor:(id)arg2 tokenColor:(id)arg3;
- (bool)hasEnclosingPlace;
- (bool)hasInitialData;
- (id)initWithPlaceItem:(id)arg1;
- (bool)isUserSpecificPlaceItem;
- (id)placeSecondaryName;
- (bool)showNearbyStringForContactPlaceItem;
- (bool)supportsContactAddressDescription;
- (id)transitLabelItems;

@end
