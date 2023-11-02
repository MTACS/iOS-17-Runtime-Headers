
@interface CNUIUserActivityRestorer : NSObject {
    NSString * _activityTypeCreateContactIntent;
    NSString * _activityTypeSpotlightQueryContinuation;
    NSString * _activityTypeSpotlightSearchableItem;
    CNContactStore * _contactStore;
    <CNUIUserActivityRestorerDelegate> * _delegate;
    NSSet * _restorableActivityTypes;
}

@property (nonatomic, readonly) NSString *activityTypeCreateContactIntent;
@property (nonatomic, readonly) NSString *activityTypeSpotlightQueryContinuation;
@property (nonatomic, readonly) NSString *activityTypeSpotlightSearchableItem;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic) <CNUIUserActivityRestorerDelegate> *delegate;
@property (nonatomic, readonly) NSSet *restorableActivityTypes;

+ (id)log;

- (void).cxx_destruct;
- (id)activityTypeCreateContactIntent;
- (id)activityTypeSpotlightQueryContinuation;
- (id)activityTypeSpotlightSearchableItem;
- (id)contactStore;
- (id)delegate;
- (id)initWithContactStore:(id)arg1;
- (id)restorableActivityTypes;
- (bool)restoreCreateContactIntent:(id)arg1;
- (bool)restoreEditingContact:(id)arg1;
- (bool)restoreSpotlightQueryContinuation:(id)arg1;
- (bool)restoreSpotlightSearchableItem:(id)arg1;
- (bool)restoreUserActivity:(id)arg1;
- (bool)restoreViewingContact:(id)arg1;
- (bool)restoreViewingGroups:(id)arg1;
- (bool)restoreViewingList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1;

@end
