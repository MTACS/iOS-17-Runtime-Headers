
@interface PFLFetchTasksRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {
    NSString * _appBundleIdentifier;
    NSString * _teamIdentifier;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasTeamIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleIdentifier;
- (bool)hasTeamIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (id)teamIdentifier;
- (void)writeTo:(id)arg1;

@end
