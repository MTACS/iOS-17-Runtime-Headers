
@interface UPContextualizerInput : NSObject {
    UPResult * _coreResult;
    <UPDialogAct> * _dialogAct;
    UPResult * _domainResult;
    UPModelIdentifier * _modelIdentifier;
    UPQuery * _query;
}

@property (nonatomic, readonly) UPResult *coreResult;
@property (nonatomic, readonly) <UPDialogAct> *dialogAct;
@property (nonatomic, readonly) UPResult *domainResult;
@property (nonatomic, readonly) UPModelIdentifier *modelIdentifier;
@property (nonatomic, readonly) UPQuery *query;

- (void).cxx_destruct;
- (id)coreResult;
- (id)dialogAct;
- (id)domainResult;
- (id)initWithDomainResult:(id)arg1 coreResult:(id)arg2 modelIdentifier:(id)arg3 query:(id)arg4 dialogAct:(id)arg5;
- (id)modelIdentifier;
- (id)query;

@end
