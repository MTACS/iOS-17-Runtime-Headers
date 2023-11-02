
@interface PBEditMenuPasteButtonTag : PBPasteButtonTag {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOrigin;
    unsigned long long  _displayMode;
    unsigned int  _secureName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly) struct CGPoint { double x1; double x2; } contentOrigin;
@property (readonly) unsigned long long displayMode;
@property (readonly) unsigned int secureName;
@property (readonly) struct CGSize { double x1; double x2; } size;

+ (bool)supportsSecureCoding;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5 editMenuPasteButtonTagVisit:(id /* block */)arg6;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })backgroundStatisticsRegionForStyle:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOrigin;
- (unsigned long long)displayMode;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentOrigin:(struct CGPoint { double x1; double x2; })arg3 displayMode:(unsigned long long)arg4;
- (long long)initialSampleEventForStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureName;
- (unsigned int)secureNameForStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
