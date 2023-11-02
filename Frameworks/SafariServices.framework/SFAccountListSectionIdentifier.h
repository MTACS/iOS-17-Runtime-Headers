
@interface SFAccountListSectionIdentifier : NSObject {
    NSString * _footerText;
    NSString * _headerText;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *footerText;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)footerText;
- (unsigned long long)hash;
- (id)headerText;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 headerText:(id)arg2 footerText:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
