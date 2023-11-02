
@interface CHKWidgetEnvironment : NSObject <NSSecureCoding> {
    void tuples;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
