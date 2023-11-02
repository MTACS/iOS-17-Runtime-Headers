
@interface DockKitCore.Component : NSObject <NSSecureCoding> {
    void id;
    void name;
    void type;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
