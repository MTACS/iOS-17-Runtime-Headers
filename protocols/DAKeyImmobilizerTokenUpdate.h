
@protocol DAKeyImmobilizerTokenUpdate <NSObject>

@required

- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DAAlishaKeyEncryptedRequest *, NSError *, void*
- (void)setImmobilizerTokens:(void *)arg1 publicKey:(void *)arg2 forKeyWithIdentifier:(void *)arg3 callback:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
