
@interface SASelfLoggerVMCPUStats : NSObject <NSSecureCoding> {
    void compressions;
    void cpuTicksIdle;
    void cpuTicksNice;
    void cpuTicksSystem;
    void cpuTicksUser;
    void decompressions;
    void faults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mwtId;
    void pageins;
    void snapshotStage;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
