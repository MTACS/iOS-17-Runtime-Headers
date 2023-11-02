
@interface CTCellularQoSFlow : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _bearerId;
    unsigned long long  _flowId;
    NSNumber * _is5G;
    NSNumber * _queueSetId;
    CTQoS * _rxQos;
    CTQoS * _txQos;
}

@property (nonatomic) unsigned long long bearerId;
@property (nonatomic) unsigned long long flowId;
@property (nonatomic, retain) NSNumber *is5G;
@property (nonatomic, retain) NSNumber *queueSetId;
@property (nonatomic, retain) CTQoS *rxQos;
@property (nonatomic, retain) CTQoS *txQos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bearerId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flowId;
- (id)initWithCoder:(id)arg1;
- (id)is5G;
- (id)queueSetId;
- (id)rxQos;
- (void)setBearerId:(unsigned long long)arg1;
- (void)setFlowId:(unsigned long long)arg1;
- (void)setIs5G:(id)arg1;
- (void)setQueueSetId:(id)arg1;
- (void)setRxQos:(id)arg1;
- (void)setTxQos:(id)arg1;
- (id)txQos;

@end
