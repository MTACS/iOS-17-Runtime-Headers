
@interface HUCameraUsageOptionItem : HFItem {
    NSSet * _cameraProfiles;
    unsigned long long  _presence;
    unsigned long long  _sortOrder;
    bool  _updateInProgress;
    unsigned long long  _usage;
}

@property (nonatomic, readonly, copy) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long presence;
@property (nonatomic, readonly) NSString *privacyDescription;
@property (nonatomic, readonly) unsigned long long sortOrder;
@property (nonatomic) bool updateInProgress;
@property (nonatomic, readonly) unsigned long long usage;

+ (unsigned long long)sortOrderForUsage:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraProfiles;
- (id)initWithPresence:(unsigned long long)arg1 cameraUsage:(unsigned long long)arg2 cameraProfiles:(id)arg3;
- (unsigned long long)presence;
- (id)privacyDescription;
- (void)setUpdateInProgress:(bool)arg1;
- (unsigned long long)sortOrder;
- (bool)updateInProgress;
- (unsigned long long)usage;

@end
