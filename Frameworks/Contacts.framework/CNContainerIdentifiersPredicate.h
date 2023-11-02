
@interface CNContainerIdentifiersPredicate : CNPredicate <CNCDContainerPredicate> {
    NSArray * _identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1;

@end
