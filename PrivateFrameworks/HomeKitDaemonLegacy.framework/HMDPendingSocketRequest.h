
@interface HMDPendingSocketRequest : NSObject {
    NSString * _applicationProtocolName;
    id /* block */  _completion;
}

@property (readonly) NSString *applicationProtocolName;
@property (readonly) id /* block */ completion;

- (void).cxx_destruct;
- (id)applicationProtocolName;
- (id /* block */)completion;
- (id)initWithApplicationProtocolName:(id)arg1 completion:(id /* block */)arg2;

@end
