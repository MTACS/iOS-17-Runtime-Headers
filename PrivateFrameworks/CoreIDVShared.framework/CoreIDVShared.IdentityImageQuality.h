
@interface CoreIDVShared.IdentityImageQuality : NSObject <NSSecureCoding> {
    void backIDSettings;
    void backScanSettings;
    void blurWindow;
    void bufferSize;
    void exploration;
    void frontIDSettings;
    void frontScanSettings;
    void idScanFrameRate;
    void livenessSettings;
    void resizeDimensions;
    void selfieSettings;
    void videoFrameRate;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
