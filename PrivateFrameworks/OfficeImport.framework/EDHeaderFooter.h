
@interface EDHeaderFooter : NSObject {
    NSString * mFooterString;
    NSString * mHeaderString;
}

+ (id)headerFooter;

- (void).cxx_destruct;
- (id)description;
- (id)footerString;
- (id)headerString;
- (void)setFooterString:(id)arg1;
- (void)setHeaderString:(id)arg1;

@end
