
@interface PLPersistentHistoryMarker : NSObject <PLPersistentHistoryMarkerOverrides>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)markerWithDate:(id)arg1;
+ (id)markerWithToken:(id)arg1;
+ (id)markerWithTransaction:(id)arg1;

- (id)changeRequestForFetching;
- (id)overrride_changeRequestForFetching;
- (id)overrride_shortDescription;
- (id)shortDescription;

@end
