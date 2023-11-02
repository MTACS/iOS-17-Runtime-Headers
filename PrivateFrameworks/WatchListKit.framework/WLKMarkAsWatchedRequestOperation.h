
@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation {
    NSString * _brandID;
    NSString * _itemID;
}

@property (nonatomic, readonly, copy) NSString *brandID;
@property (nonatomic, readonly, copy) NSString *itemID;

- (void).cxx_destruct;
- (id)brandID;
- (id)initWithItemID:(id)arg1;
- (id)itemID;

@end
