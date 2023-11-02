
@interface WFStandaloneShortcutRepresentation : NSObject {
    NSString * _activityBundleIdentifier;
    NSString * _associatedAppBundleIdentifier;
    NSString * _launchIdForCurrentPlatform;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *activityBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *launchIdForCurrentPlatform;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)activityBundleIdentifier;
- (id)associatedAppBundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithINShortcut:(id)arg1;
- (id)initWithINShortcut:(id)arg1 title:(id)arg2;
- (id)initWithTitle:(id)arg1 associatedAppBundleIdentifier:(id)arg2 launchIdForCurrentPlatform:(id)arg3 activityBundleIdentifier:(id)arg4;
- (id)launchIdForCurrentPlatform;
- (id)title;

@end
