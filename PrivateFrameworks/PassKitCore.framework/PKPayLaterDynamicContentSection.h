
@interface PKPayLaterDynamicContentSection : NSObject {
    PKApplyFooterContent * _footerContent;
    NSArray * _rows;
}

@property (nonatomic, copy) PKApplyFooterContent *footerContent;
@property (nonatomic, copy) NSArray *rows;

- (void).cxx_destruct;
- (id)description;
- (id)footerContent;
- (id)initWithDictionary:(id)arg1;
- (id)rows;
- (void)setFooterContent:(id)arg1;
- (void)setRows:(id)arg1;

@end
