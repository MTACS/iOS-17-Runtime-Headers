
@interface RUIScriptingStaticValue : NSObject {
    int  _JSPropertyAttributes;
    int (* _getter;
    const char * _identifier;
    int (* _setter;
}

@property (nonatomic) int JSPropertyAttributes;
@property (nonatomic) int (*getter;
@property (nonatomic) const char *identifier;
@property (nonatomic) int (*setter;

- (int)JSPropertyAttributes;
- (id)description;
- (int (*)getter;
- (const char *)identifier;
- (void)setGetter:(int (*)arg1;
- (void)setIdentifier:(const char *)arg1;
- (void)setJSPropertyAttributes:(int)arg1;
- (void)setSetter:(int (*)arg1;
- (int (*)setter;

@end
