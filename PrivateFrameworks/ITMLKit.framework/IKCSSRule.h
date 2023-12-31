
@interface IKCSSRule : NSObject <NSCopying> {
    IKCSSDeclarationList * _declarationList;
    IKCSSSelectorList * _selectorList;
}

@property (nonatomic, retain) IKCSSDeclarationList *declarationList;
@property (nonatomic, readonly) IKCSSMediaQuery *mediaQuery;
@property (nonatomic, retain) IKCSSSelectorList *selectorList;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declarationList;
- (id)description;
- (id)mediaQuery;
- (id)selectorList;
- (void)setDeclarationList:(id)arg1;
- (void)setSelectorList:(id)arg1;

@end
