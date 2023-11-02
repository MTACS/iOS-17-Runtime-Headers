
@interface _GEOOfflineServiceMapViewMetaData : NSObject {
    double  _lastUpdated;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _viewPort;
    double  priority;
    unsigned long long  state;
}

- (id)init;

@end
