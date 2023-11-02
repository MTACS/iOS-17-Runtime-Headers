
@interface MRGroupSessionPersonInformation : NSObject <NSSecureCoding> {
    NSData * _displayImageData;
    NSString * _displayName;
}

@property (nonatomic, retain) NSData *displayImageData;
@property (nonatomic, retain) NSString *displayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayImageData;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 displayImageData:(id)arg2;
- (void)setDisplayImageData:(id)arg1;
- (void)setDisplayName:(id)arg1;

@end
