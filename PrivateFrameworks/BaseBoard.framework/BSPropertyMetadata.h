
@interface BSPropertyMetadata : NSObject {
    Class  _classType;
    NSString * _defaultKey;
    id  _defaultValue;
    NSString * _getterName;
    NSString * _name;
    unsigned long long  _options;
    NSString * _setterName;
    BOOL  _type;
    NSString * _typeString;
}

- (void).cxx_destruct;
- (id)description;

@end
