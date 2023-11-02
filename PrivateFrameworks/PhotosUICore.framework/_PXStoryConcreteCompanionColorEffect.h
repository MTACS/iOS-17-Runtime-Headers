
@interface _PXStoryConcreteCompanionColorEffect : NSObject <PXStoryCompanionColorEffect> {
    PXGColorLookupCube * _colorLookupCube;
}

@property (nonatomic, readonly) PXGColorLookupCube *colorLookupCube;

- (void).cxx_destruct;
- (id)colorLookupCube;
- (id)createMetalTextureWithDevice:(id)arg1;
- (id)initWithColorLookupCube:(id)arg1;

@end
