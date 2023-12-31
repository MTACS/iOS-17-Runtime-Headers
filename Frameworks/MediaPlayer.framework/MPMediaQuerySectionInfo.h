
@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _hasUnknownSection;
    NSArray * _sectionIndexTitles;
    NSArray * _sections;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) bool hasUnknownSection;
@property (nonatomic, copy) NSArray *sectionIndexTitles;
@property (nonatomic, readonly, copy) NSArray *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUnknownSection;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIndexTitles;
- (id)sections;
- (void)setHasUnknownSection:(bool)arg1;
- (void)setSectionIndexTitles:(id)arg1;

@end
