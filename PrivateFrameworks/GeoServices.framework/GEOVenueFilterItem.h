
@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem> {
    bool  _describesParentVenue;
    <GEOVenueIdentifier> * _filterID;
    <GEOVenueLabel> * _label;
}

@property (nonatomic, readonly) bool describesParentVenue;
@property (nonatomic, readonly) <GEOVenueIdentifier> *filterID;
@property (nonatomic, readonly) <GEOVenueLabel> *label;

- (void).cxx_destruct;
- (bool)describesParentVenue;
- (id)filterID;
- (id)init;
- (id)initWithFilterElementInfo:(id)arg1;
- (id)initWithLabel:(id)arg1 filterID:(id)arg2;
- (id)label;

@end
