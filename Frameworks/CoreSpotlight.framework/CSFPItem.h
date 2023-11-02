
@interface CSFPItem : NSObject {
    FPItem * _internal;
}

@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) CSSearchableItem *searchableItem;

+ (id)itemWithFileURL:(id)arg1;
+ (id)itemWithFileURL:(id)arg1 forEUID:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)initWithFPItem:(id)arg1;
- (id)itemIdentifier;
- (id)providerIdentifier;
- (id)searchableItem;

@end
