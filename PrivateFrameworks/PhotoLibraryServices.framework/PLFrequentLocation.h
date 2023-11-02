
@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol> {
    <PLMomentProcessingProtocol> * _centroid;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDateInterval * _dateInterval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _momentsSet;
    NSMutableArray * _sortedMoments;
}

@property (nonatomic, retain) <PLMomentProcessingProtocol> *centroid;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *momentsSet;
@property (nonatomic, retain) NSMutableArray *sortedMoments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateLazyProperties;
- (void)addMomentToSortedMoments:(id)arg1;
- (id)centroid;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)dateInterval;
- (id)description;
- (id)initWithSortedMoments:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSimilarToFrequentLocation:(id)arg1;
- (bool)isWithinDistance:(double)arg1 toCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)momentsSet;
- (void)setCentroid:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDateInterval:(id)arg1;
- (void)setMomentsSet:(id)arg1;
- (void)setSortedMoments:(id)arg1;
- (id)sortedMoments;

@end
