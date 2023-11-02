
@interface EncoreEvent : NSObject <NSSecureCoding> {
    void data;
    void id;
    void jsonDecoder;
    void jsonEncoder;
    void serviceName;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
