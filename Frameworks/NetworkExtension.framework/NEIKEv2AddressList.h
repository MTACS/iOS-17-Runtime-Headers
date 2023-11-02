
@interface NEIKEv2AddressList : NSObject {
    unsigned long long  _ipv4AddressIndex;
    NSMutableArray * _ipv4AddressList;
    unsigned long long  _ipv6AddressIndex;
    NSMutableArray * _ipv6AddressList;
}

- (void).cxx_destruct;

@end
