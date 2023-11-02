
@interface SAMLDSAKeyValue : SAMLBaseElement

@property (nonatomic, readonly) NSData *g;
@property (nonatomic, readonly) NSData *j;
@property (nonatomic, readonly) NSData *p;
@property (nonatomic, readonly) NSData *pgenCounter;
@property (nonatomic, readonly) NSData *q;
@property (nonatomic, readonly) NSData *seed;
@property (nonatomic, readonly) NSData *y;

+ (id)createElement:(id*)arg1;

- (id)g;
- (id)j;
- (id)p;
- (id)pgenCounter;
- (id)q;
- (id)seed;
- (id)y;

@end
