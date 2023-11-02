
@interface SUScriptActivityViewController : SUScriptViewController {
    NSArray * _applicationActivities;
    NSArray * _providers;
}

@property (readonly) NSString *activityTypeAddToReadingList;
@property (readonly) NSString *activityTypeAssignToContact;
@property (readonly) NSString *activityTypeCopyToPasteboard;
@property (readonly) NSString *activityTypeMail;
@property (readonly) NSString *activityTypeMessage;
@property (readonly) NSString *activityTypePostToFacebook;
@property (readonly) NSString *activityTypePostToFlickr;
@property (readonly) NSString *activityTypePostToTwitter;
@property (readonly) NSString *activityTypePostToVimeo;
@property (readonly) NSString *activityTypePostToWeibo;
@property (readonly) NSString *activityTypePrint;
@property (readonly) NSString *activityTypeSaveToCameraRoll;
@property (copy) id excludedActivityTypes;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)activityTypeAddToReadingList;
- (id)activityTypeAssignToContact;
- (id)activityTypeCopyToPasteboard;
- (id)activityTypeMail;
- (id)activityTypeMessage;
- (id)activityTypePostToFacebook;
- (id)activityTypePostToFlickr;
- (id)activityTypePostToTwitter;
- (id)activityTypePostToVimeo;
- (id)activityTypePostToWeibo;
- (id)activityTypePrint;
- (id)activityTypeSaveToCameraRoll;
- (id)attributeKeys;
- (void)dealloc;
- (id)excludedActivityTypes;
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;

@end
