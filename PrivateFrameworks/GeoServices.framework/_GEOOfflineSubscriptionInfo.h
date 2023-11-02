
@interface _GEOOfflineSubscriptionInfo : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    GEOMapRegion * _region;
    GEOMapDataSubscriptionState * _state;
}

- (void).cxx_destruct;

@end
