
@interface SiriTTSBaseRequest : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessoryId;
    void clientBundleId;
    void didReportInstrument;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logLinkId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  outputPath;
    void requestCreatedTime;
    void sandboxToken;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) id /* block */ didReportInstrument;
@property (nonatomic, copy) NSUUID *logLinkId;
@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) NSString *sandboxToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)didReportInstrument;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)logLinkId;
- (id)outputPath;
- (id)sandboxToken;
- (void)setDidReportInstrument:(id /* block */)arg1;
- (void)setLogLinkId:(id)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setSandboxToken:(id)arg1;

@end
