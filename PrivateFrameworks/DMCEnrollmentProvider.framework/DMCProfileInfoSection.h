
@interface DMCProfileInfoSection : NSObject <NSSecureCoding> {
    NSAttributedString * _sectionAttributedText;
    NSString * _sectionFooter;
    NSString * _sectionText;
    NSString * _sectionTitle;
}

@property (nonatomic, copy) NSAttributedString *sectionAttributedText;
@property (nonatomic, copy) NSString *sectionFooter;
@property (nonatomic, copy) NSString *sectionText;
@property (nonatomic, copy) NSString *sectionTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 attributedText:(id)arg3;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 text:(id)arg3;
- (id)sectionAttributedText;
- (id)sectionFooter;
- (id)sectionText;
- (id)sectionTitle;
- (void)setSectionAttributedText:(id)arg1;
- (void)setSectionFooter:(id)arg1;
- (void)setSectionText:(id)arg1;
- (void)setSectionTitle:(id)arg1;

@end
