
@interface Stickers.LaunchConfiguration : NSObject <NSSecureCoding> {
    void creationDate;
    void identifier;
    void sectionType;
}

@property (nonatomic) double creationDate;
@property (nonatomic, readonly) NSString *identifier;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCreationDate:(double)arg1;

@end
