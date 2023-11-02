
@interface PFCloudKitModelValidator : NSObject {
    NSString * _configurationName;
    NSManagedObjectModel * _model;
    NSCloudKitMirroringDelegateOptions * _options;
    bool  _skipValueTransformerValidation;
    bool  _supportsMergeableTransformable;
    bool  _validateLegacyMetadataAttributes;
}

- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 mirroringDelegateOptions:(id)arg3;

@end
