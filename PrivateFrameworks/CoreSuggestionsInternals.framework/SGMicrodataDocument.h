
@interface SGMicrodataDocument : NSObject {
    NSMutableDictionary * _htmlIds;
    NSMutableArray * _items;
}

@property (nonatomic, readonly) NSDictionary *htmlIds;
@property (nonatomic, readonly) NSArray *items;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)asJsonLd;
- (id)htmlIds;
- (id)init;
- (id)items;
- (id)jsonLdForItem:(id)arg1;
- (void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2;

@end
