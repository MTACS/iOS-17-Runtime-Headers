
@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject {
    unsigned long long  _displayOption;
    NSString * _localizedDisplayName;
}

@property (nonatomic, readonly) unsigned long long displayOption;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;

+ (void)_buildMapIfNeeded;
+ (id)popoverDisplayInformationForPerSitePreference:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDisplayOption:(unsigned long long)arg1 localizedDisplayName:(id)arg2;
- (unsigned long long)displayOption;
- (id)localizedDisplayName;

@end
