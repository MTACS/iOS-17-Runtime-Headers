
@interface VUIActionMarkedAsWatched : VUIAction {
    NSString * _adamID;
    NSString * _itemID;
    NSString * _itemType;
}

@property (nonatomic, retain) NSString *adamID;
@property (nonatomic, retain) NSString *itemID;
@property (nonatomic, retain) NSString *itemType;

- (void).cxx_destruct;
- (id)adamID;
- (id)initWithContextData:(id)arg1;
- (id)itemID;
- (id)itemType;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAdamID:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemType:(id)arg1;

@end
