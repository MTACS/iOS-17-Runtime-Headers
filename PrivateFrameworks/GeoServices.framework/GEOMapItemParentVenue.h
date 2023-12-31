
@interface GEOMapItemParentVenue : NSObject {
    unsigned long long  _businessID;
    int  _featureType;
}

@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) int featureType;

- (unsigned long long)businessID;
- (int)featureType;
- (id)init;
- (id)initWithBusinessID:(unsigned long long)arg1 featureType:(int)arg2;
- (id)initWithLocatedInsideInfo:(id)arg1;

@end
