
@interface GDMentionGenerationResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _mentions;
}

@property (nonatomic, readonly, copy) NSArray *mentions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMentions:(id)arg1;
- (id)mentions;

@end
