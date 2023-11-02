
@interface APPCClientLayoutAssetInfo : NSObject {
    void autoloop;
    void bitrate;
    void contentType;
    void height;
    void length;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  proxyUrl;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    void width;
}

- (void).cxx_destruct;
- (id)init;

@end
