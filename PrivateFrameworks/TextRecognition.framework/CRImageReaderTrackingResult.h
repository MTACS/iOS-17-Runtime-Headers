
@interface CRImageReaderTrackingResult : NSObject {
    NSArray * _addedRegionIDs;
    NSArray * _regionTrackingGroups;
    NSArray * _removedRegionIDs;
    unsigned long long  _stabilityLevel;
    unsigned long long  _trackedRegionType;
    NSArray * _trackedRegions;
    NSArray * _updatedRegionIDs;
}

@property (readonly) NSArray *addedRegionIDs;
@property (retain) NSArray *regionTrackingGroups;
@property (retain) NSArray *removedRegionIDs;
@property (readonly) unsigned long long stabilityLevel;
@property (retain) NSArray *trackedRegions;
@property (retain) NSArray *updatedRegionIDs;

- (void).cxx_destruct;
- (id)addedRegionIDs;
- (id)initWithTrackingLevel:(unsigned long long)arg1;
- (void)markTracksNotConformingSameHomogrpahyUsingGroupsAtOCRDispatch:(bool)arg1 ransacReprojError:(float)arg2 markedQuadArea:(double)arg3;
- (id)regionTrackingGroups;
- (id)removedRegionIDs;
- (id)resultByUpdatingWithDocument:(id)arg1 sceneHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 usesGroupedRegions:(bool)arg3;
- (void)setRegionTrackingGroups:(id)arg1;
- (void)setRemovedRegionIDs:(id)arg1;
- (void)setTrackedRegions:(id)arg1;
- (void)setUpdatedRegionIDs:(id)arg1;
- (unsigned long long)stabilityLevel;
- (id)trackedRegions;
- (id)updatedRegionIDs;

@end
