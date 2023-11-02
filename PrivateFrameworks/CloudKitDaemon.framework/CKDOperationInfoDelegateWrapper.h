
@interface CKDOperationInfoDelegateWrapper : NSObject {
    <CKDOperationInfoDelegate> * _delegate;
    NSString * _personaID;
}

@property (nonatomic) <CKDOperationInfoDelegate> *delegate;
@property (nonatomic, copy) NSString *personaID;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)performWithDelegate:(id /* block */)arg1;
- (id)personaID;
- (void)setDelegate:(id)arg1;
- (void)setPersonaID:(id)arg1;

@end
