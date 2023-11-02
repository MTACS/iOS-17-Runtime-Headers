
@interface SHManagedSessionCustomCatalogDriverDaemonDelegate : NSObject <SHMatcherDelegate> {
    NSUUID * _inflightRequestID;
    NSUUID * _matchingSignatureID;
    <SHSessionDriverDelegate> * _sessionDriverDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *inflightRequestID;
@property (nonatomic, readonly) NSUUID *matchingSignatureID;
@property (nonatomic) <SHSessionDriverDelegate> *sessionDriverDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)inflightRequestID;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (id)matchingSignatureID;
- (id)sessionDriverDelegate;
- (void)setSessionDriverDelegate:(id)arg1;

@end
