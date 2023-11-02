
@interface CTEOSFirmwareInfo : NSObject <NSCopying, NSSecureCoding> {
    NSData * _currentVersion;
    NSData * _updateCsn;
    NSNumber * _userProfiles;
}

@property (nonatomic, retain) NSData *currentVersion;
@property (nonatomic, retain) NSData *updateCsn;
@property (nonatomic, retain) NSNumber *userProfiles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentVersion:(id)arg1;
- (void)setUpdateCsn:(id)arg1;
- (void)setUserProfiles:(id)arg1;
- (id)updateCsn;
- (id)userProfiles;

@end
