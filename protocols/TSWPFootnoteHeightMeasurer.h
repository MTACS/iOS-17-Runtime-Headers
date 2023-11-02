
@protocol TSWPFootnoteHeightMeasurer <NSObject>

@required

- (void)addFootnoteReferenceStorage:(TSWPStorage *)arg1;
- (double)footnoteHeight;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(TSWPStorage *)arg1;
- (void)setContainerWidth:(double)arg1;
- (void)setFootnoteSpacing:(long long)arg1;

@end
