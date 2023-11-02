
@interface CDPDAccount : NSObject {
    CDPContext * _context;
}

@property (nonatomic, readonly) CDPContext *context;
@property (nonatomic) bool hasDisabledKeychainExplicitly;

- (void).cxx_destruct;
- (id)context;
- (bool)hasDisabledKeychainExplicitly;
- (id)initWithContext:(id)arg1;
- (bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(bool)arg2;
- (bool)isOTEnabledForContext:(id)arg1;
- (unsigned long long)recoveryContactCountForAltDSID:(id)arg1;
- (void)setHasDisabledKeychainExplicitly:(bool)arg1;

@end
