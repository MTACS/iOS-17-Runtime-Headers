
@interface GEOPlaceLineTemplate : NSObject {
    NSMapTable * _attributionMap;
    GEOPDDataItem * _dataItem;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) GEOBusinessHours *businessHours;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) <GEOFactoid> *factoid;
@property (nonatomic, readonly) NSString *locationName;
@property (nonatomic, readonly) GEORatingSummary *ratingSummary;
@property (nonatomic, readonly) int type;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isDataItemValid:(id)arg1;

- (void).cxx_destruct;
- (id)businessHours;
- (id)categoryName;
- (id)factoid;
- (id)initWithDataItem:(id)arg1 timeZone:(id)arg2 attributionMap:(id)arg3;
- (id)locationName;
- (id)ratingSummary;
- (int)type;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)_businessHoursAttributedStringForFont:(id)arg1;
- (id)_categoryStringForFont:(id)arg1;
- (id)_factoidAttributedStringForFont:(id)arg1;
- (id)_locationAttributedStringForFont:(id)arg1;
- (id)_ratingGlyphAttributedStringForFont:(id)arg1;
- (id)_ratingSummaryAttributedStringForFont:(id)arg1;
- (id)attributedStringForFont:(id)arg1;

@end
