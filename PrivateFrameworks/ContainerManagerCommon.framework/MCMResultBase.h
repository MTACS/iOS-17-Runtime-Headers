
@interface MCMResultBase : NSObject <MCMResult, MCMResult_XPC> {
    MCMError * _error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithError:(id)arg1;

@end
