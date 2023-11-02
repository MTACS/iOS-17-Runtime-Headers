
@interface _SFRequestDesktopSiteQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _requestDesktopSiteQuirks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allRequestDesktopSiteQuirks;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)requestDesktopSiteSettingForDomain:(id)arg1;

@end
