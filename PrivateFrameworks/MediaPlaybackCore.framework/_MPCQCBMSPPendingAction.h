
@interface _MPCQCBMSPPendingAction : NSObject {
    id /* block */  _block;
    NSDate * _expirationDate;
    NSString * _itemIdentifier;
    NSString * _label;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)description;
- (id)expirationDate;
- (id)itemIdentifier;
- (id)label;
- (void)setBlock:(id /* block */)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;

@end
