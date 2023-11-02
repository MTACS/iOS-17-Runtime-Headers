
@interface NTKVisitManager : NSObject

+ (id)fallbackVisit;
+ (id)sharedVisitManager;

- (id)anyVisit;
- (id)currentVisit;
- (id)previousVisit;
- (id)startVisitUpdatesWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)stopVisitUpdatesForToken:(id)arg1;

@end
