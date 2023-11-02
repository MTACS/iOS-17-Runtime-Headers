
@interface CERecommendationSection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _sectionFooter;
    NSString * _sectionHeader;
    NSString * _sectionID;
}

@property (nonatomic, copy) NSString *sectionFooter;
@property (nonatomic, copy) NSString *sectionHeader;
@property (nonatomic, copy) NSString *sectionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)sectionFooter;
- (id)sectionHeader;
- (id)sectionID;
- (void)setSectionFooter:(id)arg1;
- (void)setSectionHeader:(id)arg1;
- (void)setSectionID:(id)arg1;

@end
