
@interface CHMecabraWrapper : NSObject {
    struct __Mecabra { } * _mecabra;
}

@property (readonly) struct __Mecabra { }*mecabra;

- (void)dealloc;
- (id)init;
- (void)initMecabraIfNeededWithType:(int)arg1 learningDictURL:(id)arg2;
- (struct __Mecabra { }*)mecabra;

@end
