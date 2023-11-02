
@interface HMDSettingsMetadataParser : NSObject <HMDSettingsMetadataParserProtocol, HMFLogging> {
    <HMDSettingsControllerDependency> * _dependency;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDSettingsControllerDependency> *dependency;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dependency;
- (id)initWithDependency:(id)arg1;
- (id)logIdentifier;
- (id)modelsFromMetadata:(id)arg1;

@end
