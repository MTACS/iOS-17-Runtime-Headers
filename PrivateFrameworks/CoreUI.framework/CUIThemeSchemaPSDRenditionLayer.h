
@interface CUIThemeSchemaPSDRenditionLayer : CUIThemeSchemaPSDLayer {
    CUIThemeSchemaRendition * rendition;
}

@property (nonatomic, retain) CUIThemeSchemaRendition *rendition;

- (void)dealloc;
- (id)description;
- (id)rendition;
- (void)setRendition:(id)arg1;

@end
