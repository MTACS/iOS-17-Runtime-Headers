
@interface AppStoreKitInternal.HttpAction : AppStoreKitInternal.Action {
    void body;
    void disableCache;
    void failureAction;
    void headers;
    void isStoreRequest;
    void method;
    void needsAuthentication;
    void retryCount;
    void successAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@end
