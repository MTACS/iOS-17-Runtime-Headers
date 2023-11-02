
@interface HMDPairedAccessoryInformation : NSObject {
    <HMDAccessoryBrowserDelegate> * _delegate;
    NSString * _identifier;
    NSData * _setupHash;
    unsigned long long  _transports;
}

@property (readonly) <HMDAccessoryBrowserDelegate> *delegate;
@property (readonly) NSString *identifier;
@property (readonly) NSData *setupHash;
@property (readonly) unsigned long long transports;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)setupHash;
- (unsigned long long)transports;

@end
