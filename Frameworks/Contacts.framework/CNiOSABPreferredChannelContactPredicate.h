
@interface CNiOSABPreferredChannelContactPredicate : CNPredicate <CNiOSContactPredicate> {
    bool  _limitOne;
    NSString * _preferredChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitOne;
@property (nonatomic, copy) NSString *preferredChannel;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cn_ABQSLPredicateForAddressBook:(void*)arg1 fetchRequest:(id)arg2 error:(id*)arg3;
- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredChannel:(id)arg1 limitOne:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)limitOne;
- (id)preferredChannel;
- (void)setLimitOne:(bool)arg1;
- (void)setPreferredChannel:(id)arg1;
- (id)shortDebugDescription;

@end
