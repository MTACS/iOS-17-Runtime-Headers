
@interface SBHTestWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor> {
    NSString * _bundleIdentifier;
    NSString * _containerBundleIdentifier;
    unsigned long long  _sizeClass;
    NSString * _widgetIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sizeClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *widgetIdentifier;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (id)widgetIconDescriptorFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 widgetIdentifier:(id)arg3 sizeClass:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sbh_iconDescriptorType;
- (bool)sbh_isValidWithError:(id*)arg1;
- (unsigned long long)sizeClass;
- (id)widgetIdentifier;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)batteryWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)calendarWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)dateTimeWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)gasparWatchDogWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)mapsWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)mobileNotesWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)notesWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)overviewStocksWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)podcastWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)recentsWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)relivePhotosWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)remindersWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)todayNewsWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)tvWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;
+ (id)weatherWidgetIconDescriptorForSizeClass:(unsigned long long)arg1;

@end
