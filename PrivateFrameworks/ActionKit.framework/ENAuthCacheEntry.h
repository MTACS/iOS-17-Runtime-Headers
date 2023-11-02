
@interface ENAuthCacheEntry : NSObject {
    EDAMAuthenticationResult * _authResult;
    NSDate * _cachedDate;
}

@property (nonatomic, retain) EDAMAuthenticationResult *authResult;
@property (nonatomic, retain) NSDate *cachedDate;

+ (id)entryWithResult:(id)arg1;

- (void).cxx_destruct;
- (id)authResult;
- (id)cachedDate;
- (bool)isValid;
- (void)setAuthResult:(id)arg1;
- (void)setCachedDate:(id)arg1;

@end
