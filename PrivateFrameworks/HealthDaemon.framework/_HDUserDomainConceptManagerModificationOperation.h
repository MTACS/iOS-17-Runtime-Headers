
@interface _HDUserDomainConceptManagerModificationOperation : HDJournalableOperation {
    long long  _method;
    long long  _syncIdentity;
    long long  _syncProvenance;
    struct { 
        int minimum; 
        int current; 
    }  _syncVersion;
    NSArray * _userDomainConcepts;
}

@property (nonatomic, readonly) long long method;
@property (nonatomic, readonly) long long syncIdentity;
@property (nonatomic, readonly) long long syncProvenance;
@property (nonatomic, readonly) struct { int x1; int x2; } syncVersion;
@property (nonatomic, readonly) NSArray *userDomainConcepts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserDomainConcepts:(id)arg1 method:(long long)arg2 syncProvenance:(long long)arg3 syncIdentity:(long long)arg4 syncVersion:(struct { int x1; int x2; })arg5;
- (long long)method;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (long long)syncIdentity;
- (long long)syncProvenance;
- (struct { int x1; int x2; })syncVersion;
- (id)userDomainConcepts;

@end
