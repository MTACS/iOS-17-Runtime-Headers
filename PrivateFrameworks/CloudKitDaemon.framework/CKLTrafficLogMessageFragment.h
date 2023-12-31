
@interface CKLTrafficLogMessageFragment : NSObject {
    NSString * _dataString;
    long long  _seqNum;
    unsigned long long  _type;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *dataString;
@property (nonatomic, readonly) long long seqNum;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)dataString;
- (id)description;
- (id)initWithMessage:(id)arg1;
- (long long)seqNum;
- (unsigned long long)type;
- (id)uuid;

@end
