
@interface PKExtensionRequestHandler : NSObject <PKInvalidatable> {
    NSExtension * _extension;
    NSExtensionContext * _extensionContext;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <NSCopying> * _requestIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1 extensionRequestOptions:(unsigned long long)arg2;
- (void)dealloc;
- (id)extensionContext;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;

@end
