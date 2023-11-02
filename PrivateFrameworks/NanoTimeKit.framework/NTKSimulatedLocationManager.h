
@interface NTKSimulatedLocationManager : NTKLocationManager

- (id)companionLocation;
- (id)currentLocation;
- (id)init;
- (id)previousLocation;
- (id)startLocationUpdatesWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(bool)arg2 handler:(id /* block */)arg3;
- (void)stopLocationUpdatesForToken:(id)arg1;

@end
