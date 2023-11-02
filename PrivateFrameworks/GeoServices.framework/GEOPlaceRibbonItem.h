
@interface GEOPlaceRibbonItem : NSObject {
    GEOAmenityRibbonItem * _amenityItem;
    GEOFactoidRibbonItem * _factoidItem;
    int  _type;
}

@property (nonatomic, readonly) GEOAmenityRibbonItem *amenityItem;
@property (nonatomic, readonly) GEOFactoidRibbonItem *factoidItem;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)amenityItem;
- (id)factoidItem;
- (id)initAmenityWithAmenityItem:(id)arg1;
- (id)initWithFactoidRibbonItem:(id)arg1;
- (id)initWithType:(int)arg1;
- (bool)isValid;
- (int)type;

@end
