
@interface MCMXPCMessageSetCodeSignMapping : MCMXPCMessageWithIdentifierBase <MCMParametersSetCodeSignMapping> {
    id  _info;
    id  _options;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id info;
@property (nonatomic, readonly) id options;

- (void).cxx_destruct;
- (id)info;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (id)options;

@end
