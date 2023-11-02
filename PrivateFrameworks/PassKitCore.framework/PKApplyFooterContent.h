
@interface PKApplyFooterContent : NSObject <NSCopying> {
    NSString * _footerText;
    NSArray * _links;
}

@property (nonatomic, copy) NSString *footerText;
@property (nonatomic, copy) NSArray *links;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)footerText;
- (id)initWithDictionary:(id)arg1;
- (id)links;
- (void)setFooterText:(id)arg1;
- (void)setLinks:(id)arg1;
- (id)termsIdentifiers;

@end
