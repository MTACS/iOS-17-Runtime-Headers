
@interface WidgetKit.ActivityWidgetRequest : NSObject <NSSecureCoding> {
    void defaultPayload;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  descriptor;
    void environment;
    void fileHandle;
    void isStale;
    void jindoEnvironment;
    void metrics;
    void payloadID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
