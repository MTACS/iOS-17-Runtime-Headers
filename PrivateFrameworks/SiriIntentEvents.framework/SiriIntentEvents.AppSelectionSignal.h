
@interface SiriIntentEvents.AppSelectionSignal : NSObject <NSSecureCoding> {
    void info;
    void name;
    void rows;
    void signalTiming;
    void test;
    void timeElapsed;
    void version;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
