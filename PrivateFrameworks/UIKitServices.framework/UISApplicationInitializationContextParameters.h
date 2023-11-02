
@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding> {
    NSArray * _deviceFamilies;
    unsigned int  _initialCGDirectDisplayID;
    bool  _preferSmallerDisplaySize;
    bool  _requiresFullScreen;
    unsigned long long  _supportedInterfaceOrientations;
    bool  _supportsMultiwindow;
    struct CGSize { 
        double width; 
        double height; 
    }  _usableDisplaySizeHint;
    bool  _useTrueDisplaySize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *deviceFamilies;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int initialCGDirectDisplayID;
@property (nonatomic) bool preferSmallerDisplaySize;
@property (nonatomic) bool requiresFullScreen;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) bool supportsMultiwindow;
@property (nonatomic) struct CGSize { double x1; double x2; } usableDisplaySizeHint;
@property (nonatomic) bool useTrueDisplaySize;

- (void).cxx_destruct;
- (id)deviceFamilies;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)initialCGDirectDisplayID;
- (bool)preferSmallerDisplaySize;
- (bool)requiresFullScreen;
- (void)setDeviceFamilies:(id)arg1;
- (void)setInitialCGDirectDisplayID:(unsigned int)arg1;
- (void)setPreferSmallerDisplaySize:(bool)arg1;
- (void)setRequiresFullScreen:(bool)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setSupportsMultiwindow:(bool)arg1;
- (void)setUsableDisplaySizeHint:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseTrueDisplaySize:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsMultiwindow;
- (struct CGSize { double x1; double x2; })usableDisplaySizeHint;
- (bool)useTrueDisplaySize;

@end
