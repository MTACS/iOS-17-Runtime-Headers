
@interface ARFrameContextHandler : NSObject {
    NSMutableOrderedSet * _anchorsToAdd;
    NSMutableOrderedSet * _anchorsToRemove;
    NSMutableOrderedSet * _anchorsToStopTracking;
    NSMutableSet * _collaborationDatas;
    NSMutableOrderedSet * _inFlightContexts;
    ARFrameContext * _mostRecentInFlightContext;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _sessionTransform;
    bool  _sessionTransformReset;
    bool  _sessionTransformUpdated;
}

@property (nonatomic, readonly) NSArray *anchorsToAdd;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } sessionTransform;
@property (nonatomic, readonly) bool sessionTransformUpdated;

- (void).cxx_destruct;
- (void)addAnchor:(id)arg1;
- (void)addCollaborationData:(id)arg1;
- (id)anchorsToAdd;
- (void)clearAddedAnchors;
- (void)clearInFlightContextsReapplyingChanges;
- (id)createdContextByConsumingPendingChanges;
- (id)init;
- (void)markFrameContextProcessed:(id)arg1;
- (void)removeAnchor:(id)arg1;
- (void)resetSessionTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionTransform;
- (bool)sessionTransformUpdated;
- (void)setSessionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)stopTrackingAnchors:(id)arg1;

@end
