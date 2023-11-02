
@interface CTCellInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _legacyInfo;
}

@property (nonatomic, retain) NSArray *legacyInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)legacyInfo;
- (void)setLegacyInfo:(id)arg1;

@end
