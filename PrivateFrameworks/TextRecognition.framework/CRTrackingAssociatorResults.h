
@interface CRTrackingAssociatorResults : NSObject {
    NSArray * _addedRegionIDs;
    NSArray * _removedRegionIDs;
    double  _totalError;
    NSArray * _tracked;
    NSArray * _updatedRegionIDs;
}

@property (retain) NSArray *addedRegionIDs;
@property (retain) NSArray *removedRegionIDs;
@property double totalError;
@property (retain) NSArray *tracked;
@property (retain) NSArray *updatedRegionIDs;

- (void).cxx_destruct;
- (id)addedRegionIDs;
- (id)removedRegionIDs;
- (void)setAddedRegionIDs:(id)arg1;
- (void)setRemovedRegionIDs:(id)arg1;
- (void)setTotalError:(double)arg1;
- (void)setTracked:(id)arg1;
- (void)setUpdatedRegionIDs:(id)arg1;
- (double)totalError;
- (id)tracked;
- (id)updatedRegionIDs;

@end
