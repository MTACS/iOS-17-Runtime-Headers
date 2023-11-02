
@interface HFServiceBuilder : HFItemBuilder <HFNamedItemBuilder, HFServiceLikeBuilder> {
    NSString * _accessoryName;
    NSString * _associatedServiceType;
    long long  _configurationState;
    <HFIconDescriptor> * _iconDescriptor;
    HFNamingComponents * _namingComponent;
    bool  isFavorite;
    NSString * name;
    HFRoomBuilder * room;
    bool  showInHomeDashboard;
}

@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, copy) NSString *associatedServiceType;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;
@property (nonatomic) long long configurationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HFNamingComponents *namingComponent;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, retain) HFRoomBuilder *room;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic) bool showInHomeDashboard;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFavoriting;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_lazilyUpdateAssociatedServiceType;
- (id)_lazilyUpdateConfigurationState;
- (id)_lazilyUpdateDateAdded;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateValueForContextType:(unsigned long long)arg1;
- (id)_performValidation;
- (bool)_shouldUpdateNilNameWithRoomName;
- (id)accessories;
- (id)accessoryName;
- (id)associatedServiceType;
- (id)availableIconDescriptors;
- (id)commitItem;
- (long long)configurationState;
- (id)description;
- (id)iconDescriptor;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isFavorite;
- (id)name;
- (id)namingComponent;
- (id)originalName;
- (id)removeItemFromHome;
- (id)room;
- (id)service;
- (void)setAccessoryName:(id)arg1;
- (void)setAssociatedServiceType:(id)arg1;
- (void)setConfigurationState:(long long)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNamingComponent:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setShowInHomeDashboard:(bool)arg1;
- (bool)showInHomeDashboard;
- (bool)supportsFavoriting;

@end
