
@interface _PBProperty : NSObject {
    NSInvocation * _convertFromString;
    NSInvocation * _convertToString;
    NSInvocation * _count;
    int (* _fromDictionaryReprFn;
    NSInvocation * _getter;
    NSInvocation * _has;
    NSString * _name;
    Class  _objectType;
    NSInvocation * _setter;
    NSArray * _structFields;
    NSString * _structName;
    unsigned long long  _structSize;
    Class  _subObjectType;
    BOOL  _subType;
    int (* _toDictionaryReprFn;
    BOOL  _type;
}

- (void)dealloc;
- (id)description;

@end
