
@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding> {
    NSURL * _URL;
    NSString * _bundleId;
    NSString * _sceneIdentifier;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 sceneIdentifier:(id)arg2;
+ (id)systemNavigationActionContextWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleId;
- (id)debugDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)sceneIdentifier;
- (void)setBundleId:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
