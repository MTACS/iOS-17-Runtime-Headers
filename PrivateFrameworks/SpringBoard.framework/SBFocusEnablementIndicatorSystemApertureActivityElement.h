
@interface SBFocusEnablementIndicatorSystemApertureActivityElement : FCUIFocusEnablementIndicatorSystemApertureActivityElement <SBSystemActionCoordinatedElementPreviewing, SBSystemActionElementPreviewing> {
    bool  _expanding;
    <SBSystemAperturePlatformElementHosting> * _platformElementHost;
    bool  _previewing;
    SBSystemActionElementPreviewingCoordinator * _previewingCoordinator;
    bool  _prominent;
    bool  _urgent;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SAElementHosting> *elementHost;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (getter=isExpanding, nonatomic, readonly) bool expanding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic) <SBSystemAperturePlatformElementHosting> *platformElementHost;
@property (getter=isPreviewing, nonatomic, readonly) bool previewing;
@property (getter=isProminent, nonatomic) bool prominent;
@property (readonly) Class superclass;
@property (getter=isUrgent, nonatomic, readonly) bool urgent;

- (void).cxx_destruct;
- (id)initWithActivityDescription:(id)arg1 enabled:(bool)arg2;
- (bool)isExpanding;
- (bool)isPreviewing;
- (bool)isProminent;
- (bool)isUrgent;
- (id)platformElementHost;
- (void)pop;
- (void)setExpanding:(bool)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setPlatformElementHost:(id)arg1;
- (void)setPreviewing:(bool)arg1;
- (void)setProminent:(bool)arg1;
- (void)setUrgent:(bool)arg1;
- (long long)systemApertureLayoutCustomizingOptions;

@end
