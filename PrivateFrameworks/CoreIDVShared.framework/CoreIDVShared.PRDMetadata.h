
@interface CoreIDVShared.PRDMetadata : NSObject <NSSecureCoding> {
    void stage2;
    void timestamp;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
