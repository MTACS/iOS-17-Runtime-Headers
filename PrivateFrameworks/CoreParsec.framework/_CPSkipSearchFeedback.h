
@interface _CPSkipSearchFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSkipSearchFeedback> {
    NSString * _experimentId;
    NSString * _experimentNamespaceId;
    NSString * _input;
    unsigned long long  _timestamp;
    NSString * _treatmentId;
    int  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, copy) NSString *experimentNamespaceId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (id)experimentId;
- (id)experimentNamespaceId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2;
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2 experimentId:(id)arg3 treatmentId:(id)arg4;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setExperimentNamespaceId:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (id)treatmentId;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
