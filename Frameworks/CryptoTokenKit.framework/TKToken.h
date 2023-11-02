
@interface TKToken : NSObject {
    TKTokenConfiguration * _configuration;
    <TKTokenDelegate> * _delegate;
    TKTokenKeychainContents * _keychainContents;
    TKTokenDriver * _tokenDriver;
    TKTokenID * _tokenID;
}

@property (readonly) TKTokenConfiguration *configuration;
@property <TKTokenDelegate> *delegate;
@property (retain) TKTokenKeychainContents *keychainContents;
@property (readonly) TKTokenDriver *tokenDriver;
@property (readonly) TKTokenID *tokenID;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)description;
- (id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2;
- (id)keychainContents;
- (void)setDelegate:(id)arg1;
- (void)setKeychainContents:(id)arg1;
- (void)terminate;
- (id)tokenDriver;
- (id)tokenID;

@end
