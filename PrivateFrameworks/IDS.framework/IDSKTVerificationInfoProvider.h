
@interface IDSKTVerificationInfoProvider : NSObject <KTVerificationInfoProvider> {
    NSString * _applicationIdentifier;
}

@property (nonatomic, retain) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (void)fetchPeerVerificationInfos:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)fetchSelfVerificationInfo:(id /* block */)arg1;
- (void)healSelf:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithApplicationIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;

@end
