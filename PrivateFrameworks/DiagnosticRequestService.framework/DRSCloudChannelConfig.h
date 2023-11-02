
@interface DRSCloudChannelConfig : NSObject {
    unsigned char  _environment;
    bool  _overridesDeviceDefault;
    unsigned char  _platform;
    NSNumber * _populationSliceNumber;
    unsigned char  _type;
}

@property (nonatomic, readonly) bool allowsWildcardBuild;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSString *channelName;
@property (nonatomic, readonly) unsigned char environment;
@property (nonatomic, readonly) bool isNoSubscriptionConfig;
@property (nonatomic, readonly) bool overridesDeviceDefault;
@property (nonatomic, readonly) unsigned char platform;
@property (nonatomic, readonly) NSNumber *populationSliceNumber;
@property (nonatomic, readonly) unsigned char type;

+ (id)_iOSSliceCountDict;
+ (id)_macOSSliceCountDict;
+ (id)_smallPopulationCountDict;
+ (id)_tvOSSliceCountDict;
+ (id)_watchOSSliceCountDict;
+ (id)channelIDForName:(id)arg1;
+ (id)channelNameForPlatform:(unsigned char)arg1 type:(unsigned char)arg2 sliceNum:(id)arg3;
+ (unsigned char)channelTypeForIsInternal:(bool)arg1 isSeed:(bool)arg2 isQA:(bool)arg3 isCarrier:(bool)arg4;
+ (id)currentDeviceDefaultCloudChannelConfig;
+ (unsigned short)populationSliceForDevice:(unsigned short)arg1;
+ (id)sliceCountForPlatform:(unsigned char)arg1 channelType:(unsigned char)arg2;
+ (id)staticSnapshotDeviceDefaultCloudChannelConfig;
+ (id)stringForChannelType:(unsigned char)arg1;
+ (id)stringForEnvironment:(unsigned char)arg1;

- (void).cxx_destruct;
- (bool)allowsWildcardBuild;
- (id)channelID;
- (id)channelName;
- (id)debugDescription;
- (unsigned char)environment;
- (id)initNoChecksWithPlatform:(unsigned char)arg1 channelType:(unsigned char)arg2 environment:(unsigned char)arg3 populationSliceNumber:(id)arg4 overridesDeviceDefault:(bool)arg5;
- (id)initNoSubscriptionConfig:(bool)arg1;
- (id)initWithMO:(id)arg1;
- (id)initWithValidPlatform:(unsigned char)arg1 channelType:(unsigned char)arg2 environment:(unsigned char)arg3 populationSliceNumber:(id)arg4 overridesDeviceDefault:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isNoSubscriptionConfig;
- (id)jsonDictionaryRepresentation;
- (bool)overridesDeviceDefault;
- (unsigned char)platform;
- (id)populationSliceNumber;
- (unsigned char)type;

@end
