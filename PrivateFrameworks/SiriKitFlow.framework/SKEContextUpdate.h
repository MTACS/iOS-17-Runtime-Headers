
@interface SKEContextUpdate : NSObject <NSSecureCoding> {
    void nativeFlowContextCommand;
    void provideContextCommand;
    void rrEntities;
    void systemDialogActs;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
