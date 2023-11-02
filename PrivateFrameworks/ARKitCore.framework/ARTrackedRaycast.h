
@interface ARTrackedRaycast : NSObject {
    ARWorldTrackingTechnique * _attachedWorldTrackingTechnique;
    NSUUID * _identifier;
    ARRaycastQuery * _trackedQuery;
    id /* block */  _updateHandler;
}

@property (nonatomic) ARWorldTrackingTechnique *attachedWorldTrackingTechnique;
@property (nonatomic, readonly) NSUUID *identifier;
@property (retain) ARRaycastQuery *trackedQuery;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id)attachedWorldTrackingTechnique;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 ray:(id)arg2 worldTrackingTechnique:(id)arg3 updateHandler:(id /* block */)arg4;
- (id)query;
- (void)setAttachedWorldTrackingTechnique:(id)arg1;
- (void)setTrackedQuery:(id)arg1;
- (void)stopTracking;
- (id)trackedQuery;
- (id /* block */)updateHandler;

@end
