
@interface PGCameraLibrarySwitchQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)arg1 libraryScopeUUID:(id)arg2 previousSwitchState:(id)arg3 currentSwitchState:(id)arg4;
- (bool)isEquivalentToPersistedQuestion:(id)arg1;
- (bool)isEquivalentToQuestion:(id)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
