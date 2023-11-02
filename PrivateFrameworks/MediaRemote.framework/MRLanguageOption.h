
@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _characteristics;
    NSString * _displayName;
    bool  _hasType;
    NSString * _identifier;
    NSString * _languageTag;
    unsigned int  _type;
}

@property (nonatomic, copy) NSArray *characteristics;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool hasType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *languageTag;
@property (nonatomic, readonly) _MRLanguageOptionProtobuf *protobuf;
@property (nonatomic) unsigned int type;

+ (id)automaticLanguageOptionWithType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characteristics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithType:(unsigned int)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;
- (bool)isAutomaticLanguageOptionWithType:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageTag;
- (id)protobuf;
- (void)setCharacteristics:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
