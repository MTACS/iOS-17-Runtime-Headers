
@interface RUIScriptingStaticFunction : NSObject {
    int  _JSPropertyAttributes;
    int (* _function;
    const char * _identifier;
}

@property (nonatomic) int JSPropertyAttributes;
@property (nonatomic) int (*function;
@property (nonatomic) const char *identifier;

- (int)JSPropertyAttributes;
- (id)description;
- (int (*)function;
- (const char *)identifier;
- (void)setFunction:(int (*)arg1;
- (void)setIdentifier:(const char *)arg1;
- (void)setJSPropertyAttributes:(int)arg1;

@end
