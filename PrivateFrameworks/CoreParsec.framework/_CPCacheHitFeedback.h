
@interface _CPCacheHitFeedback : PBCodable <NSSecureCoding, _CPCacheHitFeedback, _CPFeedbackUUID, _CPProcessableFeedback> {
    NSString * _input;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
