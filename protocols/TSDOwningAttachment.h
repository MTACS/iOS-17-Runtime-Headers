
@protocol TSDOwningAttachment <NSObject>

@required

- (unsigned long long)enabledKnobMask;
- (void)infoChanged;
- (bool)isAnchored;
- (bool)isAttachedToBodyText;
- (bool)isDrawable;
- (bool)isPartitioned;
- (bool)isSearchable;
- (Class)positionerClass;
- (bool)specifiesEnabledKnobMask;

@end
