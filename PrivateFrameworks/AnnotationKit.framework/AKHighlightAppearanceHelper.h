
@interface AKHighlightAppearanceHelper : NSObject

+ (int)annotationStyleForHighlightAttributeWithTag:(long long)arg1;
+ (long long)attributeTagForHighlightOfColor:(id)arg1;
+ (long long)attributeTagForNoteOfColor:(id)arg1;
+ (id)borderColorForNoteOfHighlightAttributeTag:(long long)arg1;
+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (id)colorForNoteOfHighlightAttributeTag:(long long)arg1;
+ (bool)highlightColor:(id)arg1 isEquivalentToHighlightColor:(id)arg2;

@end
