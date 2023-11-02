
@interface _CRKSendMessageCardFactory : NSObject <CRSCardServing, CRSIdentifiedServing> {
    <_CRKSendMessageCardFactoryDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_CRKSendMessageCardFactoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)buildCardForContent:(id)arg1 completion:(id /* block */)arg2;
- (bool)canSatisfyCardRequest:(id)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
