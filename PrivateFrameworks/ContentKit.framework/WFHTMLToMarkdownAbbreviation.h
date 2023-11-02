
@interface WFHTMLToMarkdownAbbreviation : NSObject {
    NSString * _abbreviation;
    NSString * _title;
}

@property (nonatomic, copy) NSString *abbreviation;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)abbreviation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAbbreviation:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
