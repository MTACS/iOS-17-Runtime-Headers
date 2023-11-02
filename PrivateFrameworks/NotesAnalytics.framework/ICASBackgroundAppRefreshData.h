
@interface ICASBackgroundAppRefreshData : NSObject <AADataEventType> {
    NSNumber * _automaticAppUpdatesAllowed;
}

@property (nonatomic, readonly) NSNumber *automaticAppUpdatesAllowed;

+ (id)dataName;

- (void).cxx_destruct;
- (id)automaticAppUpdatesAllowed;
- (id)initWithAutomaticAppUpdatesAllowed:(id)arg1;
- (id)toDict;

@end
