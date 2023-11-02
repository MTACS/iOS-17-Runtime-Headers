
@interface FCNetworkEventGroupKey : NSObject <NSCopying> {
    int  _eventType;
    NSString * _respondingPOP;
    unsigned long long  _sessionID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
