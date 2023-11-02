
@interface APPCOutstreamVideoInfo : NSObject {
    void bitrate;
    void connectionType;
    void signalStrength;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoAssetURL;
    void videoDuration;
}

- (void).cxx_destruct;
- (id)init;

@end
