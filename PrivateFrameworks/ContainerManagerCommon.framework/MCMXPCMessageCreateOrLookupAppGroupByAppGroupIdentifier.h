
@interface MCMXPCMessageCreateOrLookupAppGroupByAppGroupIdentifier : MCMXPCMessageBase <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier> {
    NSString * _appGroupIdentifier;
}

@property (nonatomic, readonly) NSString *appGroupIdentifier;

- (void).cxx_destruct;
- (id)appGroupIdentifier;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;

@end
