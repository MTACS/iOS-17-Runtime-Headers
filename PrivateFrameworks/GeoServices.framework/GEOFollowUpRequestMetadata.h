
@interface GEOFollowUpRequestMetadata : NSObject {
    int  _dataType;
    int  _requestType;
}

@property (nonatomic, readonly) int dataType;
@property (nonatomic, readonly) bool isSearchRequestForNearbyPlaces;
@property (nonatomic, readonly) int requestType;

- (int)_dataTypeFrom:(int)arg1;
- (int)_requestTypeFrom:(int)arg1;
- (int)dataType;
- (id)initWithGEOPDFollowUpRequestMetadata:(id)arg1;
- (bool)isSearchRequestForNearbyPlaces;
- (int)requestType;

@end
