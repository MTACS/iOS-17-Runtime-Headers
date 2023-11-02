
@interface DDCreateReminderAction : DDAction

+ (bool)isAvailable;

- (bool)canBePerformedByOpeningURL;
- (id)iconName;
- (int)interactionType;
- (id)localizedName;
- (void)prepareViewControllerForActionController:(id)arg1;

@end
