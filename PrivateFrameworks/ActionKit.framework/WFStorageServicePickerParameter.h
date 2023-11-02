
@interface WFStorageServicePickerParameter : WFEnumerationParameter {
    WFiCloudDriveAccessResource * _iCloudDriveAccessResource;
    NSArray * _possibleStates;
}

@property (nonatomic, retain) WFiCloudDriveAccessResource *iCloudDriveAccessResource;

+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (id)iCloudDriveAccessResource;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)setActionResources:(id)arg1;
- (void)setICloudDriveAccessResource:(id)arg1;

@end
