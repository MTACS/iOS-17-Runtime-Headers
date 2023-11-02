
@interface FBSSceneLayer : NSObject {
    long long  _alignment;
    CAContext * _context;
    unsigned int  _contextID;
    FBSSceneIdentityToken * _keyboardOwner;
    double  _level;
    NSString * _stringRepresentation;
    long long  _type;
}

@property (nonatomic, readonly) CAContext *CAContext;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic, readonly) FBSSceneIdentityToken *keyboardOwner;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)CAContext;
- (id)_init;
- (long long)alignment;
- (id)capture;
- (unsigned int)contextID;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContextID:(unsigned int)arg1 level:(double)arg2;
- (id)initWithKeyboardContext:(id)arg1;
- (id)initWithKeyboardOwner:(id)arg1 level:(double)arg2;
- (id)initWithWindowContext:(id)arg1;
- (bool)isCAContextLayer;
- (bool)isEqual:(id)arg1;
- (bool)isKeyboardLayer;
- (bool)isKeyboardProxyLayer;
- (bool)isKindOfClass:(Class)arg1;
- (id)keyboardOwner;
- (double)level;
- (id)stringRepresentation;
- (long long)type;

@end
