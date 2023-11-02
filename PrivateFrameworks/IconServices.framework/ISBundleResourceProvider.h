
@interface ISBundleResourceProvider : ISResourceProvider {
    NSURL * _bundleURL;
    NSDictionary * _iconDictionary;
    NSString * _templateType;
}

@property (retain) NSURL *bundleURL;
@property (retain) NSDictionary *iconDictionary;
@property unsigned long long options;
@property (retain) NSString *templateType;

- (void).cxx_destruct;
- (bool)_isAppleResource;
- (id)bundleURL;
- (id)description;
- (id)iconDictionary;
- (id)iconResource;
- (id)initWithBundle:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBundleURL:(id)arg1 iconDictionary:(id)arg2 options:(unsigned long long)arg3;
- (void)resolveResources;
- (id)resourceNamed:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setIconDictionary:(id)arg1;
- (void)setTemplateType:(id)arg1;
- (id)symbol;
- (id)templateType;

@end
