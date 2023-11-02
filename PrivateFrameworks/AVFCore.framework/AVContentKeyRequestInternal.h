
@interface AVContentKeyRequestInternal : NSObject {
    NSData * contentIdentifier;
    AVContentKey * contentKey;
    AVContentKeySpecifier * contentKeySpecifier;
    unsigned long long  cryptorKeyRequestID;
    NSString * cryptorUUID;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    unsigned long long  customURLRequestID;
    NSError * error;
    struct OpaqueFigCPECryptor { } * figCryptor;
    bool  hasAnyKeyRequestSucceeded;
    id  identifier;
    NSData * initializationData;
    bool  isInchargeOfKeyRequest;
    bool  isRenewalRequest;
    NSData * keyIDFromInitializationData;
    struct FigContentKeySpecifier { } * keySpecifier;
    NSDictionary * preloadingRequestOptions;
    bool  providesPersistableKey;
    AVContentKeyReportGroup * reportGroup;
    unsigned long long  requestID;
    struct __CFDictionary { } * requestInfo;
    int  responseParamsSent;
    struct OpaqueFigSimpleMutex { } * stateMutex;
    long long  status;
    bool  useContentKeyBoss;
    struct OpaqueFigCFWeakReferenceHolder { } * weakContentKeyBoss;
    AVContentKeySession * weakSession;
}

- (void).cxx_destruct;

@end
