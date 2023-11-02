
@interface _MNJunctionViewPreloadEvent : NSObject {
    GEOComposedGuidanceEvent * _junctionViewEvent;
    bool  _needsPreload;
}

@property (nonatomic, retain) GEOComposedGuidanceEvent *junctionViewEvent;
@property (nonatomic) bool needsPreload;

- (void).cxx_destruct;
- (id)junctionViewEvent;
- (bool)needsPreload;
- (void)setJunctionViewEvent:(id)arg1;
- (void)setNeedsPreload:(bool)arg1;

@end
