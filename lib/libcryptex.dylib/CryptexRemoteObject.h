
@interface CryptexRemoteObject : NSObject {
    char * _identifier;
    char * _version;
}

@property (nonatomic, readonly) char *identifier;
@property (nonatomic, readonly) char *version;

- (void)dealloc;
- (char *)identifier;
- (id)initWithDesc:(id)arg1;
- (char *)version;

@end
