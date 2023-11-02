
@interface _CPDidGoToSearchFeedback : PBCodable <NSSecureCoding, _CPDidGoToSearchFeedback, _CPProcessableFeedback> {
    int  _endpoint;
    NSString * _input;
    unsigned long long  _timestamp;
    int  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (int)endpoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndpoint:(int)arg1;
- (void)setInput:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
