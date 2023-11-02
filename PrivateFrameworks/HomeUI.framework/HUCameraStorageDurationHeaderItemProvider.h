
@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider {
    NSSet * _cameraProfiles;
    unsigned long long  _displayStyle;
}

@property (nonatomic, readonly, copy) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long displayStyle;

- (void).cxx_destruct;
- (id)cameraProfiles;
- (unsigned long long)displayStyle;
- (id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1;
- (id)invalidationReasons;

@end
