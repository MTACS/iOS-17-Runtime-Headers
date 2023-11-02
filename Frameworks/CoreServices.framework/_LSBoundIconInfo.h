
@interface _LSBoundIconInfo : NSObject <LSIconResourceLocator, NSSecureCoding> {
    NSString * _applicationIdentifier;
    bool  _badge;
    NSString * _cacheKey;
    NSURL * _containerURL;
    NSURL * _dataContainerURL;
    bool  _documentAllowOverride;
    NSArray * _fileNames;
    _LSLazyPropertyList * _iconsDictionary;
    bool  _prerendered;
    NSURL * _resourcesDirectoryURL;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (readonly) NSDictionary *bundleIconsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *resourcesDirectoryURL;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundleIconsDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resourcesDirectoryURL;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setResourcesDirectoryURL:(id)arg1;

@end
