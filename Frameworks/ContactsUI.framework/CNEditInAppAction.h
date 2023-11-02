
@interface CNEditInAppAction : CNContactAction {
    CNUIUserActivityManager * _activityManager;
}

@property (nonatomic, readonly) CNUIUserActivityManager *activityManager;

- (void).cxx_destruct;
- (id)activityManager;
- (id)initWithContact:(id)arg1 activityManager:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (id)title;

@end
