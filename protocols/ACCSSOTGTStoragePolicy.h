
@protocol ACCSSOTGTStoragePolicy <NSObject>

@required

- (NSArray *)allTokensWithPrincipal:(ACFPrincipal *)arg1;
- (bool)removeTokenWithPrincipal:(ACFPrincipal *)arg1;
- (<ACCSSOTokenProtocol> *)searchTokenWithPrincipal:(ACFPrincipal *)arg1;
- (bool)storeToken:(id <ACCSSOTokenProtocol>)arg1;
- (bool)updateToken:(id <ACCSSOTokenProtocol>)arg1;

@end
