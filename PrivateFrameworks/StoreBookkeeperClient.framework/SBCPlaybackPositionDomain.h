
@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domainIdentifier;
    NSString * _foreignDatabasePath;
    bool  _supportsSyncProtocol;
    NSString * _ubiquitousDatabasePath;
}

@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *foreignDatabasePath;
@property (nonatomic) bool supportsSyncProtocol;
@property (nonatomic, retain) NSString *ubiquitousDatabasePath;

+ (id)domainForExtrasValues;
+ (id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)foreignDatabasePath;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 foreignDatabasePath:(id)arg2;
- (void)setSupportsSyncProtocol:(bool)arg1;
- (void)setUbiquitousDatabasePath:(id)arg1;
- (bool)supportsSyncProtocol;
- (id)ubiquitousDatabasePath;

@end
