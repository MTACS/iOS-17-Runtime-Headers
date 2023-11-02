
@interface CACRXLanguageObjectWrapper : NSObject {
    struct __RXLanguageObject { } * _rxLanguageObject;
}

- (void)dealloc;
- (id)initWithRXLanguageObject:(struct __RXLanguageObject { }*)arg1;

@end
