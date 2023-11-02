
@interface _INPBQueryHealthSampleIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBQueryHealthSampleIntentResponse> {
    struct { }  _has;
    NSArray * _resultValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resultValues;
@property (nonatomic, readonly) unsigned long long resultValuesCount;
@property (readonly) Class superclass;

+ (Class)resultValuesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addResultValues:(id)arg1;
- (void)clearResultValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resultValues;
- (id)resultValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultValuesCount;
- (void)setResultValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end
