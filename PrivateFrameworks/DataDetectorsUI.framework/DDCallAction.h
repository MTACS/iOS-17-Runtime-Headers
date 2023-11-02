
@interface DDCallAction : DDTelephoneNumberAction

+ (id)callProvider;
+ (bool)isAvailable;

- (long long)TTYType;
- (double)_systemFontSize;
- (bool)_titleFitsInActionSheet:(id)arg1;
- (bool)canBePerformedByOpeningURL;
- (id)dialRequest;
- (id)dialRequestWithProvider:(id)arg1;
- (int)interactionType;
- (bool)isEmail;
- (id)localizedCallStringForName:(id)arg1 usingCallRelay:(bool)arg2;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationTitleTargetString;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (id)subtitle;

@end
