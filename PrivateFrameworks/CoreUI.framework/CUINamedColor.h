
@interface CUINamedColor : CUINamedLookup {
    struct CGColor { } * _cgColor;
    NSString * _colorName;
    bool  _substituteWithSystemColor;
}

@property (nonatomic, readonly) struct CGColor { }*cgColor;
@property (nonatomic, readonly) bool substituteWithSystemColor;
@property (nonatomic, readonly) NSString *systemColorName;

- (struct CGColor { }*)cgColor;
- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (bool)substituteWithSystemColor;
- (id)systemColorName;

@end
