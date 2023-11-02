
@interface PromotedContent.AppStoreSupplementalContextBuilder : NSObject {
    void adamId;
    void additionalClickCaps;
    void additionalImpressionCaps;
    void appMetadataFields;
    void clickCap;
    void impressionCap;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestTime;
    void storeFront;
    void storeFrontLocale;
}

- (void).cxx_destruct;
- (id)init;

@end
