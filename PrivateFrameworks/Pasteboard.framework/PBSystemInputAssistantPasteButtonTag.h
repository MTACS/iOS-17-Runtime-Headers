
@interface PBSystemInputAssistantPasteButtonTag : PBPasteButtonTag {
    long long  _site;
}

@property (readonly) long long site;

+ (bool)supportsSecureCoding;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5 editMenuPasteButtonTagVisit:(id /* block */)arg6;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (float)backgroundStatisticsFailingContrastForStyle:(id)arg1;
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;
- (float)backgroundStatisticsPassingContrastForStyle:(id)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })backgroundStatisticsRegionForStyle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSite:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureNameForStyle:(id)arg1;
- (long long)site;

@end
