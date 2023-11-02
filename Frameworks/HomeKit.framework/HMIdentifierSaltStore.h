
@interface HMIdentifierSaltStore : NSObject {
    NSData * _assistantIdentifierSalt;
    NSData * _identifierSalt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSData *assistantIdentifierSalt;
@property (nonatomic, retain) NSData *identifierSalt;

- (void).cxx_destruct;
- (id)assistantIdentifierSalt;
- (id)identifierSalt;
- (void)setAssistantIdentifierSalt:(id)arg1;
- (void)setIdentifierSalt:(id)arg1;

@end
