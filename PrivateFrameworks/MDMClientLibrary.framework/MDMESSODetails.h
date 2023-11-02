
@interface MDMESSODetails : NSObject {
    NSArray * _appIDs;
    NSArray * _associatedDomains;
    NSNumber * _associatedDomainsEnableDirectDownloads;
    NSData * _configurationProfile;
    NSNumber * _iTunesStoreID;
}

@property (nonatomic, copy) NSArray *appIDs;
@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, retain) NSNumber *associatedDomainsEnableDirectDownloads;
@property (nonatomic, retain) NSData *configurationProfile;
@property (nonatomic, retain) NSNumber *iTunesStoreID;

+ (id)essoDetailsWithJSONDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)appIDs;
- (id)associatedDomains;
- (id)associatedDomainsEnableDirectDownloads;
- (id)configurationProfile;
- (id)iTunesStoreID;
- (id)initWithiTunesStoreID:(id)arg1 appIDs:(id)arg2 associatedDomains:(id)arg3 associatedDomainsEnableDirectDownloads:(id)arg4 configurationProfile:(id)arg5;
- (void)setAppIDs:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;
- (void)setAssociatedDomainsEnableDirectDownloads:(id)arg1;
- (void)setConfigurationProfile:(id)arg1;
- (void)setITunesStoreID:(id)arg1;

@end
