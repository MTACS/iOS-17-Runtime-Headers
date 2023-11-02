
@protocol WBSTranslationContextSnapshotStoring <NSObject>

@required

- (void)_safari_setTranslationContextSnapshot:(WBSTranslationContextSnapshot *)arg1;
- (WBSTranslationContextSnapshot *)_safari_translationContextSnapshot;

@end
