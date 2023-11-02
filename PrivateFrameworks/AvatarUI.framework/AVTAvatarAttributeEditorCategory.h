
@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding> {
    NSString * _localizedName;
    AVTCoreModelGroup * _modelGroup;
    AVTAvatarAttributeEditorPreviewMode * _previewMode;
    NSArray * _sectionProviders;
    NSArray * _sections;
    NSDictionary * _symbolNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) AVTCoreModelGroup *modelGroup;
@property (nonatomic, readonly) AVTAvatarAttributeEditorPreviewMode *previewMode;
@property (nonatomic, readonly, copy) NSArray *sectionProviders;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ symbolNameProvider;
@property (nonatomic, readonly, copy) NSDictionary *symbolNames;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSectionProviders:(id)arg1 localizedName:(id)arg2 previewMode:(id)arg3 modelGroup:(id)arg4 symbolNames:(id)arg5;
- (id)localizedName;
- (id)modelGroup;
- (id)previewMode;
- (id)representedAVTPresetResources;
- (id)sectionProviders;
- (id)sections;
- (id /* block */)symbolNameProvider;
- (id)symbolNames;

@end
