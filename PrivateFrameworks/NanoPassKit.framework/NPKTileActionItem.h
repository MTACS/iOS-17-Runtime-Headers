
@interface NPKTileActionItem : NSObject {
    PKPaymentPassAction * _action;
    PKPassTile * _tile;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (nonatomic, readonly) PKPassTile *tile;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (id)initWithTile:(id)arg1 action:(id)arg2;
- (id)tile;

@end
