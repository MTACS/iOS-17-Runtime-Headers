
@interface CNCollationHeaderSection : CNCollationSection {
    NSString * _ICUSortKey;
}

@property (readonly) NSString *ICUSortKey;

- (void).cxx_destruct;
- (id)ICUSortKey;
- (id)initWithKey:(id)arg1 localizedName:(id)arg2 ICUSortKey:(id)arg3;

@end
