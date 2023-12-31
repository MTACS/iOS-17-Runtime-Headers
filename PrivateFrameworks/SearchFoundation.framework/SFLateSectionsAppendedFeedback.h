
@interface SFLateSectionsAppendedFeedback : SFFeedback <NSCopying> {
    NSArray * _sections;
}

@property (nonatomic, copy) NSArray *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;

@end
