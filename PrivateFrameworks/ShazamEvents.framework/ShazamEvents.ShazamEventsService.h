
@interface ShazamEvents.ShazamEventsService : NSObject <SHService, ShazamEvents.ShazamEventsServer> {
    void liveMusicEventFetcher;
    void underlyingServiceDelegate;
}

@property (nonatomic, retain) <SHServiceDelegate> *serviceDelegate;

+ (void)initializeGlobalServiceState;
+ (id)machServiceName;

- (void).cxx_destruct;
- (id)init;
- (void)liveMusicEventWithEventID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)liveMusicScheduleWithArtistID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)liveMusicScheduleWithVenueID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serviceDelegate;
- (void)setServiceDelegate:(id)arg1;
- (void)stop;

@end
