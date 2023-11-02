
@interface HDMinorExperiencesPlugin : NSObject <HDPlugin>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pluginIdentifier;
@property (readonly) Class superclass;

- (id)extensionForHealthDaemon:(id)arg1;
- (id)extensionForProfile:(id)arg1;
- (id)pluginIdentifier;

@end
