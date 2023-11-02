
@interface HUCameraRecordingSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule> {
    NSArray * _cameraPresenceItems;
    NSSet * _cameraProfiles;
    <HUCameraRecordingSettingsModuleDelegate> * _delegate;
    unsigned long long  _displayStyle;
    NSSet * _itemProviders;
    HULocationDeviceManager * _locationDeviceManager;
    NSString * _locationDeviceName;
    NSString * _longestCameraPresenceItemTitle;
    NSString * _longestCameraUsageOptionItemTitle;
    HUCameraRecordingOptionsItem * _recordingOptionsItem;
    HUCameraPresenceRecordingSettingsModule * _whenAwaySectionModule;
    HUCameraPresenceRecordingSettingsModule * _whenHomeSectionModule;
}

@property (nonatomic, readonly) unsigned long long awayAccessModeSetting;
@property (nonatomic, readonly) NSArray *cameraPresenceItems;
@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCameraRecordingSettingsModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *itemProviders;
@property (nonatomic, retain) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, retain) NSString *locationDeviceName;
@property (nonatomic, readonly) NSString *longestCameraPresenceItemTitle;
@property (nonatomic, readonly) NSString *longestCameraUsageOptionItemTitle;
@property (nonatomic, readonly) NSArray *presenceModules;
@property (nonatomic, readonly) unsigned long long presentAccessModeSetting;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, readonly) HUCameraRecordingOptionsItem *recordingOptionsItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUCameraPresenceRecordingSettingsModule *whenAwaySectionModule;
@property (nonatomic, retain) HUCameraPresenceRecordingSettingsModule *whenHomeSectionModule;

- (void).cxx_destruct;
- (id)_attributedFooterTitle;
- (void)_buildItemProviders;
- (id)_expandingSectionModuleForPresenceType:(unsigned long long)arg1;
- (unsigned long long)awayAccessModeSetting;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraPresenceItems;
- (id)cameraProfiles;
- (id)delegate;
- (id)didSelectItem:(id)arg1;
- (unsigned long long)displayStyle;
- (id)expandableModules;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 displayStyle:(unsigned long long)arg3;
- (bool)isItemHeader:(id)arg1;
- (id)itemProviders;
- (id)locationDeviceManager;
- (id)locationDeviceName;
- (id)longestCameraPresenceItemTitle;
- (id)longestCameraUsageOptionItemTitle;
- (id)presenceModules;
- (unsigned long long)presentAccessModeSetting;
- (id)recordingOptionsItem;
- (void)setDelegate:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setLocationDeviceManager:(id)arg1;
- (void)setLocationDeviceName:(id)arg1;
- (void)setWhenAwaySectionModule:(id)arg1;
- (void)setWhenHomeSectionModule:(id)arg1;
- (id)whenAwaySectionModule;
- (id)whenHomeSectionModule;

@end
