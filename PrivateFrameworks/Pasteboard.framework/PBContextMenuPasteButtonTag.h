
@interface PBContextMenuPasteButtonTag : PBPasteButtonTag {
    bool  _hasTrailingGutter;
    long long  _layoutSize;
    unsigned int  _secureName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGPoint { 
        double x; 
        double y; 
    }  _titleOrigin;
}

@property (readonly) bool hasTrailingGutter;
@property (readonly) long long layoutSize;
@property (readonly) unsigned int secureName;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) struct CGPoint { double x1; double x2; } titleOrigin;

+ (bool)supportsSecureCoding;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5 editMenuPasteButtonTagVisit:(id /* block */)arg6;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (float)backgroundStatisticsFailingContrastForStyle:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (float)backgroundStatisticsPassingContrastForStyle:(id)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })backgroundStatisticsRegionForStyle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTrailingGutter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3 layoutSize:(long long)arg4 hasTrailingGutter:(bool)arg5;
- (long long)initialSampleEventForStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (long long)layoutSize;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureName;
- (unsigned int)secureNameForStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })titleOrigin;

@end
