
@interface _CPConnectionInvalidatedFeedback : PBCodable <NSSecureCoding, _CPConnectionInvalidatedFeedback, _CPProcessableFeedback> {
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
