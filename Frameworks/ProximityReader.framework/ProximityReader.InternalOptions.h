
@interface ProximityReader.InternalOptions : NSObject <NSSecureCoding> {
    void includeErrorInReadResult;
    void returnReadResultImmediately;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
