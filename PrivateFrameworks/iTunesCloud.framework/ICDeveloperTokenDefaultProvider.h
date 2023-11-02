
@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingCompletionHandlers;
    NSOperationQueue * _requestOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProvider;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fetchDeveloperTokenWithClientInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDeveloperTokenForClientInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;

@end
