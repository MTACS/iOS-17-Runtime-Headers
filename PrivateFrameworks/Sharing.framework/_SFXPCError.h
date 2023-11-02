
@interface _SFXPCError : NSObject <NSSecureCoding> {
    void domain;
    void errorCode;
    void file;
    void internalDebugDescription;
    void internalLocalizedDescription;
    void line;
    void process;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
