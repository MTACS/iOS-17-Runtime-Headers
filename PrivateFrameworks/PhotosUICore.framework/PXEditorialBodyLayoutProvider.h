
@interface PXEditorialBodyLayoutProvider : NSObject <PXPhotosSectionBodyLayoutProvider> {
    bool  _avoidsFullWidthHeroes;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _bodyCornerRadius;
    PXPhotosViewModel * _viewModel;
    <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> * invalidationDelegate;
}

@property (nonatomic) bool avoidsFullWidthHeroes;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } bodyCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> *invalidationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)avoidsFullWidthHeroes;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })bodyCornerRadius;
- (void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;
- (id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outWantsDecoration:(bool*)arg5;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)invalidationDelegate;
- (void)sectionedLayout:(id)arg1 bodyLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (void)setAvoidsFullWidthHeroes:(bool)arg1;
- (void)setBodyCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setInvalidationDelegate:(id)arg1;
- (bool)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2;

@end
