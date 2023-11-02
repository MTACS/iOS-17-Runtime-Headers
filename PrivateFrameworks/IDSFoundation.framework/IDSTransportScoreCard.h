
@interface IDSTransportScoreCard : NSObject <NSCopying> {
    bool  alreadySelected;
    unsigned int  interfaceIndex;
    bool  isIPv6;
    unsigned long long  score;
    long long  stunTransport;
    long long  transportInterface;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
