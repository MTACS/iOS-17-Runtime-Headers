
@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker * _labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasMUID;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasVenueFeatureType;
- (id)_identifier;
- (bool)_isTransitDisplayFeature;
- (id)_labelMarker;
- (unsigned long long)_muid;
- (id)_place;
- (id)_styleAttributes;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (struct { double x1; double x2; })coordinate;
- (id)initWithLabelMarker:(id)arg1;
- (bool)isValid;
- (id)name;
- (int)referenceFrame;

@end
