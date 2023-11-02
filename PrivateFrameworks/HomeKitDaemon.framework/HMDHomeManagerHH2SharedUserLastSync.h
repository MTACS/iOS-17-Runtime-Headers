
@interface HMDHomeManagerHH2SharedUserLastSync : HMFObject {
    NSString * _archivePath;
    NSDate * _creationDate;
    NSUUID * _homeUUID;
    HMDUser * _user;
    bool  _valid;
}

@property (readonly) NSData *archive;
@property (readonly) NSDate *creationDate;
@property (retain) NSUUID *homeUUID;
@property (retain) HMDUser *user;
@property (getter=isValid, readonly) bool valid;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)archive;
- (id)attributeDescriptions;
- (void)configure;
- (id)creationDate;
- (id)description;
- (id)homeUUID;
- (id)initWithArchivePath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)privateDescription;
- (void)removeArchiveFromLocalDisk;
- (void)setHomeUUID:(id)arg1;
- (void)setUser:(id)arg1;
- (id)shortDescription;
- (id)user;

@end
