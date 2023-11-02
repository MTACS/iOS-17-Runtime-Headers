
@interface STStatusDomainDataChangeRecordDiffEntry : NSObject <BSDebugDescriptionProviding, STStatusDomainDataChangeRecordEntry> {
    id  _clientKey;
    <STStatusDomainDataDiff> * _diff;
}

@property (nonatomic, readonly) id clientKey;
@property (nonatomic, readonly) <STStatusDomainData><STStatusDomainDataDifferencing> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <STStatusDomainDataDiff> *diff;
@property (nonatomic, readonly) unsigned long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientKey;
- (id)data;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diff;
- (unsigned long long)entryType;
- (id)initWithDiff:(id)arg1 clientKey:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
