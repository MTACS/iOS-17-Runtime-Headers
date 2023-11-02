
@interface VSAppChannelsFilter : NSObject {
    NSArray * _allChannelMappings;
    NSDictionary * _appsByChannelID;
    NSSet * _genericAppAdamIDs;
    NSSet * _personalAppAdamIDs;
    NSSet * _personalChannelIDs;
}

@property (nonatomic, copy) NSArray *allChannelMappings;
@property (nonatomic, copy) NSDictionary *appsByChannelID;
@property (nonatomic, copy) NSSet *genericAppAdamIDs;
@property (nonatomic, copy) NSSet *personalAppAdamIDs;
@property (nonatomic, readonly, copy) NSArray *personalAppDescriptions;
@property (nonatomic, copy) NSSet *personalChannelIDs;

- (void).cxx_destruct;
- (void)_updateAdamIDs;
- (id)allChannelMappings;
- (id)appsByChannelID;
- (id)genericAppAdamIDs;
- (id)init;
- (id)personalAppAdamIDs;
- (id)personalAppDescriptions;
- (id)personalChannelIDs;
- (void)setAllChannelMappings:(id)arg1;
- (void)setAppsByChannelID:(id)arg1;
- (void)setGenericAppAdamIDs:(id)arg1;
- (void)setPersonalAppAdamIDs:(id)arg1;
- (void)setPersonalChannelIDs:(id)arg1;

@end
