
@interface _INPBPayloadNeedsExecuteIntent : PBCodable <NSCopying, NSSecureCoding, _INPBPayloadNeedsExecuteIntent> {
    struct { }  _has;
    _INPBIntentExecutionRequest * _intentExecution;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentExecution;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentExecutionRequest *intentExecution;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentExecution;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentExecution;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentExecution:(id)arg1;
- (void)writeTo:(id)arg1;

@end
