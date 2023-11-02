
@interface AppStoreKitInternal.HttpTemplateAction : AppStoreKitInternal.Action {
    void disableCache;
    void failureAction;
    void formBody;
    void headers;
    void isStoreRequest;
    void jsonBody;
    void message;
    void method;
    void needsAuthentication;
    void parameters;
    void retryCount;
    void successAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@end
