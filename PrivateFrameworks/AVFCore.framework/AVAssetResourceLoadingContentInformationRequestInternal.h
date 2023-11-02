
@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject {
    NSArray * allowedContentTypes;
    bool  byteRangeAccessSupported;
    long long  contentLength;
    NSString * contentType;
    bool  diskCachingPermitted;
    bool  entireLengthAvailableOnDemand;
    NSDate * renewalDate;
}

@end
