
@interface CALNGEORouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
- (id)hypothesizerForPlannedDestination:(id)arg1;
- (void)removedRouteHypothesizerForEventExternalURL:(id)arg1;

@end
