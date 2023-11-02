
@interface OADImageProperties : OADGraphicProperties {
    OADImageFill * mImageFill;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (bool)hasImageFill;
- (id)imageFill;
- (void)setImageFill:(id)arg1;

@end
