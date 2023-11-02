
@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying> {
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    bool  _hasSetMaxLength;
    bool  _isSecure;
    long long  _keyboardType;
    unsigned long long  _maxLength;
    NSString * _title;
    NSString * _value;
}

@property (nonatomic, readonly) bool _hasSetMaxLength;
@property (nonatomic, readonly) long long autocapitalizationType;
@property (nonatomic, readonly) long long autocorrectionType;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) unsigned long long maxLength;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)_definitionsFromSerializedDefinitions:(id)arg1;

- (void).cxx_destruct;
- (void)_copyPropertiesToDefinition:(id)arg1;
- (bool)_hasSetMaxLength;
- (id)_initWithDictionary:(id)arg1;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isSecure;
- (long long)keyboardType;
- (unsigned long long)maxLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (id)value;

@end
