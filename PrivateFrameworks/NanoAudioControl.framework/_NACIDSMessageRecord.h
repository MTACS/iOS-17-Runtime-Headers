
@interface _NACIDSMessageRecord : NSObject {
    PBCodable * _message;
    NSString * _queueOne;
    double  _timeout;
    long long  _type;
}

@property (nonatomic, retain) PBCodable *message;
@property (nonatomic, copy) NSString *queueOne;
@property (nonatomic) double timeout;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)message;
- (id)queueOne;
- (void)setMessage:(id)arg1;
- (void)setQueueOne:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setType:(long long)arg1;
- (double)timeout;
- (long long)type;

@end
