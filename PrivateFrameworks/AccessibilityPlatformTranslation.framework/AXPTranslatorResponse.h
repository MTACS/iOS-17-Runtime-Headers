
@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding> {
    AXPTranslationObject * _associatedNotificationObject;
    unsigned long long  _attribute;
    unsigned long long  _error;
    unsigned long long  _notification;
    <NSObject><NSCopying><NSSecureCoding> * _resultData;
}

@property (nonatomic, retain) AXPTranslationObject *associatedNotificationObject;
@property (nonatomic) unsigned long long attribute;
@property (nonatomic, readonly) bool boolResponse;
@property (nonatomic) unsigned long long error;
@property (nonatomic) unsigned long long notification;
@property (nonatomic, retain) <NSObject><NSCopying><NSSecureCoding> *resultData;
@property (nonatomic, readonly) AXPTranslationObject *translationResponse;
@property (nonatomic, readonly) NSArray *translationsResponse;

+ (id)allowedDecodableClasses;
+ (id)emptyResponse;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedNotificationObject;
- (unsigned long long)attribute;
- (bool)boolResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)error;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)notification;
- (id)resultData;
- (void)setAssociatedNotificationObject:(id)arg1;
- (void)setAttribute:(unsigned long long)arg1;
- (void)setError:(unsigned long long)arg1;
- (void)setNotification:(unsigned long long)arg1;
- (void)setResultData:(id)arg1;
- (id)translationResponse;
- (id)translationsResponse;

@end
