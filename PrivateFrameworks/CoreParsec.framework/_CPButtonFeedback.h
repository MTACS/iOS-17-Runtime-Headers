
@interface _CPButtonFeedback : PBCodable <NSSecureCoding, _CPButtonFeedback, _CPProcessableFeedback> {
    NSString * _commandDetail;
    int  _commandType;
    unsigned long long  _timestamp;
    unsigned long long  _uniqueId;
}

@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic) int commandType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long uniqueId;

- (void).cxx_destruct;
- (id)commandDetail;
- (int)commandType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommandDetail:(id)arg1;
- (void)setCommandType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)uniqueId;
- (void)writeTo:(id)arg1;

@end
