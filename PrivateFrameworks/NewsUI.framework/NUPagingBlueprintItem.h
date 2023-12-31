
@interface NUPagingBlueprintItem : NSObject {
    NSString * _identifier;
    <NUPage> * _page;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <NUPage> *page;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPage:(id)arg1;
- (id)initWithPageID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)page;

@end
