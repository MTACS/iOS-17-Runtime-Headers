
@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying> {
    NSArray * _composedApplicationShortcutItems;
    NSArray * _dynamicApplicationShortcutItems;
    NSArray * _staticApplicationShortcutItems;
}

@property (nonatomic, readonly) NSArray *composedApplicationShortcutItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dynamicApplicationShortcutItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *staticApplicationShortcutItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)composedApplicationShortcutItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dynamicApplicationShortcutItems;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2 composedApplicationShortcutItems:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)staticApplicationShortcutItems;

@end
