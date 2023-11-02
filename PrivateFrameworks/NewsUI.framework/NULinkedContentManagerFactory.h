
@interface NULinkedContentManagerFactory : NSObject {
    NSMutableArray * _factories;
}

@property (nonatomic, readonly) NSMutableArray *factories;

- (void).cxx_destruct;
- (void)addLinkedContentProviderFactory:(id)arg1;
- (id)createLinkedContentManagerForArticle:(id)arg1;
- (id)factories;
- (id)init;

@end
