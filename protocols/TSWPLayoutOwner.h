
@protocol TSWPLayoutOwner <NSObject>

@required

- (bool)caresAboutStorageChanges;
- (void)layoutManager:(TSWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(TSWPLayoutManager *)arg1;
- (TSWPLineHintCollection *)lineHintsForTarget:(TSDLayout<TSWPLayoutTarget> *)arg1;
- (<TSWPTextWrap> *)textWrapper;

@optional

- (bool)forceWesternLineBreaking;
- (bool)invalidateOnExactTextRangeLayout;
- (bool)shouldAllowFinishingPartionedAttachmentLayout;
- (<TSWPStyleProvider> *)styleProvider;
- (TSUColor *)textColorOverride;

@end
