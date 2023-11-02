
@interface WLAppSearchRequest : NSObject {
    NSString * _identifiers;
}

@property (nonatomic, copy) NSString *identifiers;

- (void).cxx_destruct;
- (id)identifiers;
- (id)initWithAndroidIdentifiers:(id)arg1;
- (void)search:(id /* block */)arg1;
- (void)setIdentifiers:(id)arg1;

@end
