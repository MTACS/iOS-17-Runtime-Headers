
@interface _INPBIntentResponsePayloadSuccess : PBCodable <NSCopying, NSSecureCoding, _INPBIntentResponsePayloadSuccess> {
    struct { 
        unsigned int shouldOpenContainingApplication : 1; 
    }  _has;
    NSData * _responseMessageData;
    NSString * _responseTypeName;
    bool  _shouldOpenContainingApplication;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasResponseMessageData;
@property (nonatomic, readonly) bool hasResponseTypeName;
@property (nonatomic) bool hasShouldOpenContainingApplication;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *responseMessageData;
@property (nonatomic, copy) NSString *responseTypeName;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasResponseMessageData;
- (bool)hasResponseTypeName;
- (bool)hasShouldOpenContainingApplication;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseMessageData;
- (id)responseTypeName;
- (void)setHasShouldOpenContainingApplication:(bool)arg1;
- (void)setResponseMessageData:(id)arg1;
- (void)setResponseTypeName:(id)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;
- (void)writeTo:(id)arg1;

@end
