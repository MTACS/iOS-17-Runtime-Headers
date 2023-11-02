
@interface ProximityReader.CardReaderErrorInternal : NSObject <NSSecureCoding> {
    void code;
    void userInfo;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
