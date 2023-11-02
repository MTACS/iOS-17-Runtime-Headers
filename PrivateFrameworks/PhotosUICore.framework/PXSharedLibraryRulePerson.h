
@interface PXSharedLibraryRulePerson : NSObject {
    <PXSharedLibraryParticipant> * _participant;
    PHPerson * _person;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) <PXSharedLibraryParticipant> *participant;
@property (nonatomic, readonly) PHPerson *person;

+ (id)rulePersonWithParticipant:(id)arg1;
+ (id)rulePersonWithPerson:(id)arg1;

- (void).cxx_destruct;
- (id)displayName;
- (void)fetchStatusWithCompletion:(id /* block */)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)participant;
- (id)person;

@end
