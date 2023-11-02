
@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _actionType;
    unsigned long long  _attributeType;
    unsigned long long  _clientType;
    NSDictionary * _parameters;
    unsigned long long  _requestType;
    AXPTranslationObject * _translation;
}

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long attributeType;
@property (nonatomic) unsigned long long clientType;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) AXPTranslationObject *translation;

+ (id)allowedDecodableClasses;
+ (id)requestWithTranslation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)actionType;
- (unsigned long long)attributeType;
- (unsigned long long)clientType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (unsigned long long)requestType;
- (void)setActionType:(unsigned long long)arg1;
- (void)setAttributeType:(unsigned long long)arg1;
- (void)setClientType:(unsigned long long)arg1;
- (void)setParameters:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setTranslation:(id)arg1;
- (id)translation;

@end
