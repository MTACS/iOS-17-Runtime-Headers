
@interface HomePlatformSettingsUI.XPCConnectionManager : _TtCs12_SwiftObject <HomePlatformSettingsUI.BetaEnrollmentXPCServerInterface, HomePlatformSettingsUI.CarrySettingsXPCServerInterface> {
    void delayedRetryTask;
    void internalCnx;
    void maker;
    void retries;
    void retryPolicy;
}

- (void)receiveWithBetaEnrollmentHomeID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 18: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, long double, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)receiveWithCarrySettingsHomeID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 18: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, long double, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
