
@interface MTTheme : NSManagedObject

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool isBackgroundLight;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic, retain) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

+ (bool)createOrUpdateTheme:(id)arg1 forUuid:(id)arg2 inMOC:(id)arg3;
+ (id)insertNewTheme:(id)arg1 forUuid:(id)arg2 inMOC:(id)arg3;

- (id)convertToColorTheme;
- (void)populateWithColorTheme:(id)arg1;

@end
