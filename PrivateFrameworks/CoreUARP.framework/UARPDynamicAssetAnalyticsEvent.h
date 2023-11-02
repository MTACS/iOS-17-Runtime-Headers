
@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    UARPSuperBinaryAsset * _asset;
    NSMutableArray * _events;
    NSURL * _url;
}

+ (id)tag;

- (void).cxx_destruct;
- (bool)decomposeUARP;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)send;

@end
