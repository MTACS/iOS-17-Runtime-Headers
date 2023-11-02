
@interface PBPasteButtonTag : UISSlotTag <NSSecureCoding>

+ (id)calloutBarPasteButtonTagWithSecureName:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3 titleWidth:(double)arg4 contentScaleLevel:(unsigned long long)arg5;
+ (id)contextMenuPasteButtonTagWithSecureName:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3 layoutSize:(long long)arg4 hasTrailingGutter:(bool)arg5;
+ (id)editMenuPasteButtonTagWithSecureName:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentOrigin:(struct CGPoint { double x1; double x2; })arg3 displayMode:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;
+ (id)systemInputAssistantPasteButtonTagWithSite:(long long)arg1;
+ (id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(double)arg1;
+ (id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(double)arg1;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5 editMenuPasteButtonTagVisit:(id /* block */)arg6;
- (float)backgroundStatisticsFailingContrastForStyle:(id)arg1;
- (float)backgroundStatisticsPassingContrastForStyle:(id)arg1;
- (struct CGColor { }*)baseForegroundColorForStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)failGradeForStyle:(id)arg1;
- (unsigned long long)hitTestInformationMaskForStyle:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
