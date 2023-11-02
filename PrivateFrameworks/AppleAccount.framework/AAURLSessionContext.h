
@interface AAURLSessionContext : NSObject <NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext> {
    AAAbsintheSigner * _absintheSigner;
    AKAppleIDSession * _appleIDSession;
    AAAttestationSigner * _attestationSigner;
    AARemoteServer * _remoteServer;
    bool  _requiresSigning;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _signerLock;
    NSObject<OS_dispatch_queue> * _signingQueue;
}

@property (nonatomic, retain) AAAbsintheSigner *absintheSigner;
@property (nonatomic, retain) AAAttestationSigner *attestationSigner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AARemoteServer *remoteServer;
@property (nonatomic, readonly) bool requiresSigning;
@property (readonly) Class superclass;

+ (id)_relevantHTTPStatusCodes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_additionalAbsintheHeadersForData:(id)arg1 completion:(id /* block */)arg2;
- (void)_additionalAttestationHeadersForData:(id)arg1 withValidity:(id)arg2 completion:(id /* block */)arg3;
- (void)_additionalHeadersForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_initRequiringSigning:(bool)arg1 appleIDSession:(id)arg2;
- (id)absintheSigner;
- (id)attestationSigner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initRequiringSigning:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)relevantHTTPStatusCodes;
- (id)remoteServer;
- (bool)requiresSigning;
- (void)setAbsintheSigner:(id)arg1;
- (void)setAttestationSigner:(id)arg1;
- (void)setRemoteServer:(id)arg1;

@end
