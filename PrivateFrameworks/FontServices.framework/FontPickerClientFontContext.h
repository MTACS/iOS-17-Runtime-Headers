
@interface FontPickerClientFontContext : NSObject <FontServicesFontPickerSynchronizeProtocol> {
    NSXPCListenerEndpoint * _clientEndpoint;
    bool  _clientHasFontAccessEntitlement;
    NSXPCConnection * _connection;
    bool  _forClientContext;
    bool  _hideProfileFonts;
    NSDictionary * _locallyActivatedFontsInfo;
    int  _nestCount;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *clientEndpoint;
@property (nonatomic) bool clientHasFontAccessEntitlement;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool hideProfileFonts;
@property (nonatomic, retain) NSDictionary *locallyActivatedFontsInfo;

+ (void)invalidateSharedInstanceForEndpoint:(id)arg1;
+ (id)sharedInstanceForEndpoint:(id)arg1;

- (void).cxx_destruct;
- (void)_doneWithLocallyActivatedFonts;
- (bool)_isFontFilePathAccepatableForClient:(id)arg1 withFontEntitlement:(bool)arg2 hideProfileFonts:(bool)arg3;
- (void)_setupLocallyActivatedFonts;
- (void)checkin:(id /* block */)arg1;
- (id)clientEndpoint;
- (bool)clientHasFontAccessEntitlement;
- (id)connection;
- (void)dealloc;
- (void)enumerateFontFamilyNamesUsingBlock:(id /* block */)arg1;
- (id)fontNamesForFontFamily:(id)arg1 withFontEntitlement:(bool)arg2 hideProfileFonts:(bool)arg3;
- (void)fontSelected:(id)arg1;
- (bool)hideProfileFonts;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (bool)isFontFamilyAcceptableForClient:(id)arg1 withFontEntitlement:(bool)arg2 hideProfileFonts:(bool)arg3;
- (id)locallyActivatedFontsInfo;
- (void)runBlockInClientFontContext:(id /* block */)arg1;
- (void)runWithClientFonts:(id /* block */)arg1;
- (void)runWithFontNamesForFamilyName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)setClientEndpoint:(id)arg1;
- (void)setClientHasFontAccessEntitlement:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setHideProfileFonts:(bool)arg1;
- (void)setLocallyActivatedFontsInfo:(id)arg1;
- (void)setup;
- (void)synchronize:(id)arg1 deactivated:(id)arg2 includingFontAssets:(bool)arg3;

@end
