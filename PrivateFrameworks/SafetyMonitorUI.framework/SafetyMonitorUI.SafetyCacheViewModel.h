
@interface SafetyMonitorUI.SafetyCacheViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _cacheExpiryDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _cacheReleaseDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _receiverSessionStatus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _safetyCache;
    void containerVCHandler;
    void manager;
    void phoneCache;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionID;
    void userType;
    void watchCache;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
