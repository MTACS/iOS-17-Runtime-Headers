
@interface DSSourceDescriptor : NSObject {
    NSBundle * _localizationBundle;
    NSString * _sourceName;
    NSDictionary * _sourceProperties;
}

@property (nonatomic, readonly, copy) NSString *correspondingApplicationIdentifier;
@property (nonatomic, readonly, copy) NSArray *darwinNotifications;
@property (nonatomic, readonly, copy) NSString *dataUsageBundleIdentifier;
@property (nonatomic, readonly) UIImage *iconForDetail;
@property (nonatomic, readonly) UIImage *iconForTable;
@property (nonatomic, readonly, copy) NSDictionary *ignoreErrors;
@property (nonatomic, readonly, copy) NSString *localizedAlertButtonLabel;
@property (nonatomic, readonly, copy) NSString *localizedAppName;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedStopAllAlertDetail;
@property (nonatomic, readonly, copy) NSString *localizedStopAllAlertLabel;
@property (nonatomic, readonly, copy) NSString *localizedStopAllLabel;
@property (nonatomic, readonly, copy) NSString *localizedStopByPersonAlertText;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) bool requiresCellular;
@property (nonatomic, readonly) bool requiresWifi;
@property (nonatomic, readonly) bool supportsResourceTypes;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (void)initialize;
+ (id)sourceDescriptorForSource:(id)arg1;
+ (id)sourceDescriptorForSource:(id)arg1 localizationBundle:(id)arg2;

- (void).cxx_destruct;
- (id)correspondingApplicationIdentifier;
- (id)darwinNotifications;
- (id)dataUsageBundleIdentifier;
- (id)ignoreErrors;
- (id)localizedAlertButtonLabel;
- (id)localizedAlertDetailForSelectedPeople:(id)arg1;
- (id)localizedAppName;
- (id)localizedDetailTextByType:(id)arg1;
- (id)localizedName;
- (id)localizedPublicSharingDetailTextByType:(id)arg1;
- (id)localizedStopAllAlertDetail;
- (id)localizedStopAllAlertDetailForPeople:(id)arg1;
- (id)localizedStopAllAlertLabel;
- (id)localizedStopAllLabel;
- (id)localizedStopByPerson:(id)arg1;
- (id)localizedStopByPersonAlertText;
- (id)localizedStopByTypeSubtitleForSharingType:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (long long)priority;
- (bool)requiresCellular;
- (bool)requiresWifi;
- (bool)shouldIgnoreError:(id)arg1;
- (bool)supportsResourceTypes;

// Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI

- (id)iconForDetail;
- (id)iconForTable;

@end
