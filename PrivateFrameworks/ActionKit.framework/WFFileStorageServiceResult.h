
@interface WFFileStorageServiceResult : NSObject <NSSecureCoding> {
    NSURL * _lifecycleManagedURL;
    <NSSecureCoding> * _metadataObject;
    NSSecurityScopedURLWrapper * _wrappedURL;
}

@property (nonatomic, readonly) NSURL *lifecycleManagedURL;
@property (nonatomic, readonly) <NSSecureCoding> *metadataObject;
@property (nonatomic, readonly) NSSecurityScopedURLWrapper *wrappedURL;

+ (void)getResultWithFileURL:(id)arg1 consumingBundleID:(id)arg2 resultBlock:(id /* block */)arg3;
+ (id)possibleMetadataClasses;
+ (id)resultWithMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 metadataObject:(id)arg2;
- (id)initWithWrappedURL:(id)arg1 metadataObject:(id)arg2;
- (id)lifecycleManagedURL;
- (id)metadataObject;
- (id)wrappedURL;

@end
