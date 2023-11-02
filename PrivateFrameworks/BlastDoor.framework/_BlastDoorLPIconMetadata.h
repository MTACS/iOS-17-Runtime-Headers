
@interface _BlastDoorLPIconMetadata : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _accessibilityText;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithURL:(id)arg1;
- (id)accessibilityText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccessibilityText:(id)arg1;
- (void)setURL:(id)arg1;
- (unsigned int)version;

@end
