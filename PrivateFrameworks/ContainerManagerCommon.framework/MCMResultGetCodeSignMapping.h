
@interface MCMResultGetCodeSignMapping : MCMResultBase {
    NSDictionary * _info;
}

@property (nonatomic, readonly) NSDictionary *info;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)info;
- (id)initWithInfo:(id)arg1;

@end
