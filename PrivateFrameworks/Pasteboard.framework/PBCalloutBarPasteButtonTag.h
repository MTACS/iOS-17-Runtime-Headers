
@interface PBCalloutBarPasteButtonTag : PBPasteButtonTag {
    unsigned long long  _contentScaleLevel;
    unsigned int  _secureName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGPoint { 
        double x; 
        double y; 
    }  _titleOrigin;
    double  _titleWidth;
}

@property (readonly) unsigned long long contentScaleLevel;
@property (readonly) unsigned int secureName;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) struct CGPoint { double x1; double x2; } titleOrigin;
@property (readonly) double titleWidth;

+ (bool)supportsSecureCoding;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5 editMenuPasteButtonTagVisit:(id /* block */)arg6;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (unsigned long long)contentScaleLevel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureName:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3 titleWidth:(double)arg4 contentScaleLevel:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureName;
- (unsigned int)secureNameForStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })titleOrigin;
- (double)titleWidth;

@end
