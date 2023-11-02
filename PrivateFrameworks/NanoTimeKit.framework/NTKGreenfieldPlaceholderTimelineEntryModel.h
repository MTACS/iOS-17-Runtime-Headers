
@interface NTKGreenfieldPlaceholderTimelineEntryModel : NTKTimelineEntryModel {
    UIImage * _appIcon;
    NSString * _appName;
    double  _installationProgress;
    unsigned long long  _modelState;
}

+ (id)entryModelWithAppIcon:(id)arg1 appName:(id)arg2 installationProgress:(float)arg3;
+ (id)entryModelWithNullState;
+ (id)placeholderImageForFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_circularSmallTemplateForInstallation;
- (id)_downloadTextWithIsUpperCased:(bool)arg1;
- (id)_extraLargeTemplateForInstallation;
- (id)_graphicBezelTemplateForInstallation;
- (id)_graphicCircularTemplateForInstallation;
- (id)_graphicCornerTemplateForInstallation;
- (id)_graphicExtraLargeTemplateForInstallation;
- (id)_graphicRectangularTemplateForInstallation;
- (id)_installationTemplateForComplicationFamily:(long long)arg1;
- (id)_modularLargeTemplateForInstallation;
- (id)_modularSmallTemplateForInstallation;
- (id)_placeholderFullColorImageProvider;
- (id)_placeholderImageProvider;
- (id)_utilitarianLargeTemplateForInstallation;
- (id)_utilitarianSmallFlatTemplateForInstallation;
- (id)templateForComplicationFamily:(long long)arg1;

@end
