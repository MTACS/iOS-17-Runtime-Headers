
@interface _TVIKTextElement : IKTextElement {
    NSAttributedString * _cachedAttributedString;
}

@property (nonatomic, copy) NSAttributedString *cachedAttributedString;

- (void).cxx_destruct;
- (void)_stylesMarkedDirtyNotification:(id)arg1;
- (id)cachedAttributedString;
- (void)dealloc;
- (void)setCachedAttributedString:(id)arg1;

@end
