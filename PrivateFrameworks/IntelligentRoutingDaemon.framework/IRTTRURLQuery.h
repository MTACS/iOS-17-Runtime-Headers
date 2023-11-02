
@interface IRTTRURLQuery : NSObject {
    NSString * _classification;
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSArray * _extensionIdentifiers;
    NSString * _radarDescription;
    NSArray * _remoteDeviceSelections;
    NSString * _reproducibility;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *classification;
@property (nonatomic, readonly) NSString *componentID;
@property (nonatomic, readonly) NSString *componentName;
@property (nonatomic, readonly) NSString *componentVersion;
@property (nonatomic, copy) NSArray *extensionIdentifiers;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, copy) NSArray *remoteDeviceSelections;
@property (nonatomic, readonly) NSString *reproducibility;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)build;
- (id)classification;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)extensionIdentifiers;
- (id)init;
- (id)radarDescription;
- (id)remoteDeviceSelections;
- (id)reproducibility;
- (void)setExtensionIdentifiers:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRemoteDeviceSelections:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
