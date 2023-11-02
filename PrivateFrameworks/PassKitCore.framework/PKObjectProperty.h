
@interface PKObjectProperty : NSObject {
    Class  _aClass;
    NSString * _name;
    unsigned long long  _type;
    NSString * _valueGetter;
    NSString * _variableName;
}

- (void).cxx_destruct;

@end
