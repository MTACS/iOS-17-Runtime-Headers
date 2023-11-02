
@interface GEOTransitVehicleUpdater : NSObject {
    bool  _active;
    <GEOTransitVehicleUpdaterDelegate> * _delegate;
    NSSet * _tripIDs;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <GEOTransitVehicleUpdaterDelegate> *delegate;
@property (nonatomic, copy) NSSet *tripIDs;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTripIDs:(id)arg1;
- (id)tripIDs;

@end
