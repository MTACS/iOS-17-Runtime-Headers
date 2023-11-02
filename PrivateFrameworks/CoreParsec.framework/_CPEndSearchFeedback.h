
@interface _CPEndSearchFeedback : PBCodable <NSSecureCoding, _CPEndSearchFeedback, _CPFeedbackUUID, _CPProcessableFeedback> {
    unsigned long long  _timestamp;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
