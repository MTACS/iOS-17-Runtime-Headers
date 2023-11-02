
@interface ODCurarePersonalizationResult : NSObject {
    NSURL * _currentlyUsedModelPath;
    NSDictionary * _metadata;
    bool  _newPersonalizedModelIsSelected;
    NSString * _personalizedModelIdentifier;
    NSURL * _personalizedModelPath;
    bool  _saveNewPersonalizedModel;
}

@property (nonatomic, retain) NSURL *currentlyUsedModelPath;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) bool newPersonalizedModelIsSelected;
@property (nonatomic, retain) NSString *personalizedModelIdentifier;
@property (nonatomic, retain) NSURL *personalizedModelPath;
@property (nonatomic) bool saveNewPersonalizedModel;

- (void).cxx_destruct;
- (id)currentlyUsedModelPath;
- (id)initWithNewPersonalizedModelPath:(id)arg1 currentlyUsedModelPath:(id)arg2 isSelected:(bool)arg3 saveModel:(bool)arg4 newPersonalizedModelIdentifier:(id)arg5;
- (id)metadata;
- (bool)newPersonalizedModelIsSelected;
- (id)personalizedModelIdentifier;
- (id)personalizedModelPath;
- (bool)saveNewPersonalizedModel;
- (void)setCurrentlyUsedModelPath:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNewPersonalizedModelIsSelected:(bool)arg1;
- (void)setPersonalizedModelIdentifier:(id)arg1;
- (void)setPersonalizedModelPath:(id)arg1;
- (void)setSaveNewPersonalizedModel:(bool)arg1;

@end
