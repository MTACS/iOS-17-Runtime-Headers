
@interface _INPBIntentResponsePayloadFailure : PBCodable <NSCopying, NSSecureCoding, _INPBIntentResponsePayloadFailure> {
    bool  _appLaunchRequested;
    NSString * _enumTypeName;
    int  _errorCode;
    struct { 
        unsigned int appLaunchRequested : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) bool appLaunchRequested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *enumTypeName;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasAppLaunchRequested;
@property (nonatomic, readonly) bool hasEnumTypeName;
@property (nonatomic) bool hasErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appLaunchRequested;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)enumTypeName;
- (int)errorCode;
- (bool)hasAppLaunchRequested;
- (bool)hasEnumTypeName;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppLaunchRequested:(bool)arg1;
- (void)setEnumTypeName:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasAppLaunchRequested:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
