
@interface PBUndoInteractionHUDTextPasteButtonTag : PBPasteButtonTag {
    double  _minWidth;
}

@property (readonly) double minWidth;

+ (bool)supportsSecureCoding;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5 editMenuPasteButtonTagVisit:(id /* block */)arg6;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })backgroundStatisticsRegionForStyle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinWidth:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (double)minWidth;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureNameForStyle:(id)arg1;

@end
