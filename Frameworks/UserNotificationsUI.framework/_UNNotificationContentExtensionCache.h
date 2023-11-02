
@interface _UNNotificationContentExtensionCache : NSObject {
    NSMutableDictionary * _extensions;
}

@property (nonatomic, retain) NSMutableDictionary *extensions;

- (void).cxx_destruct;
- (void)_addExtension:(id)arg1;
- (void)_removeAllExtensions;
- (id)_sourceDictForSource:(id)arg1;
- (id)extensionForNotificationSourceIdentifier:(id)arg1 categoryIdentifier:(id)arg2;
- (id)extensions;
- (id)init;
- (void)registerExtensions:(id)arg1;
- (void)setExtensions:(id)arg1;

@end
