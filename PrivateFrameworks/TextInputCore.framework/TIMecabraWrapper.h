
@interface TIMecabraWrapper : NSObject {
    int  _inputMethodType;
    struct __Mecabra { } * _mecabraRef;
}

@property (readonly) int inputMethodType;
@property (readonly) struct __Mecabra { }*mecabraRef;

- (void)dealloc;
- (id)initWithInputMethodType:(int)arg1 learningDictionaryDirectoryURL:(struct __CFURL { }*)arg2 creationOptions:(unsigned long long)arg3;
- (id)initWithInputMethodType:(int)arg1 learningDictionaryDirectoryURL:(id)arg2 creationOptionsDictionary:(id)arg3;
- (int)inputMethodType;
- (struct __Mecabra { }*)mecabraRef;

@end
