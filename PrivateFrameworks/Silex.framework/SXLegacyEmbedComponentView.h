
@interface SXLegacyEmbedComponentView : SXEmbedComponentView {
    SXEmbedResource * _embedResource;
}

@property (nonatomic, retain) SXEmbedResource *embedResource;

- (void).cxx_destruct;
- (id)embedResource;
- (void)setEmbedResource:(id)arg1;

@end
