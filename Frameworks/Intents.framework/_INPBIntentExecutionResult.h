
@interface _INPBIntentExecutionResult : PBCodable <NSCopying, NSSecureCoding, _INPBIntentExecutionResult> {
    NSString * _encodedIntent;
    NSString * _encodedIntentResponse;
    int  _encodingFormat;
    struct { 
        unsigned int encodingFormat : 1; 
    }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *encodedIntent;
@property (nonatomic, copy) NSString *encodedIntentResponse;
@property (nonatomic) int encodingFormat;
@property (nonatomic, readonly) bool hasEncodedIntent;
@property (nonatomic, readonly) bool hasEncodedIntentResponse;
@property (nonatomic) bool hasEncodingFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEncodingFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedIntent;
- (id)encodedIntentResponse;
- (int)encodingFormat;
- (id)encodingFormatAsString:(int)arg1;
- (bool)hasEncodedIntent;
- (bool)hasEncodedIntentResponse;
- (bool)hasEncodingFormat;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncodedIntent:(id)arg1;
- (void)setEncodedIntentResponse:(id)arg1;
- (void)setEncodingFormat:(int)arg1;
- (void)setHasEncodingFormat:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
