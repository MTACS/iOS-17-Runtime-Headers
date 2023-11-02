
@interface HMDSharedUserDataModel : HMDUserDataModel

@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSUUID *supportsAutomaticHH2MigrationModelUUID;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID;

+ (id)hmbProperties;

@end
