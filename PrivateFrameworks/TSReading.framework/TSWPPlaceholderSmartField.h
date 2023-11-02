
@interface TSWPPlaceholderSmartField : TSWPSmartField {
    bool  _localizable;
}

@property (nonatomic) bool isLocalizable;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)initWithContext:(id)arg1;
- (bool)isLocalizable;
- (void)setIsLocalizable:(bool)arg1;

@end
