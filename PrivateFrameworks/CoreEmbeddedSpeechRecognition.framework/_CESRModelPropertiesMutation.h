
@interface _CESRModelPropertiesMutation : NSObject <CESRModelPropertiesMutating> {
    CESRModelProperties * _baseModel;
    NSString * _modelRoot;
    NSString * _modelType;
    NSString * _modelVersion;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasModelVersion : 1; 
        unsigned int hasModelType : 1; 
        unsigned int hasModelRoot : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setModelRoot:(id)arg1;
- (void)setModelType:(id)arg1;
- (void)setModelVersion:(id)arg1;

@end
