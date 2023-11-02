
@interface PKPassTile : NSObject <NSSecureCoding> {
    bool  _inProgress;
    PKPassTileMetadata * _metadata;
    PKPassTileState * _state;
    NSString * _stateIdentifier;
}

@property (getter=isInProgress, nonatomic, readonly) bool inProgress;
@property (nonatomic, readonly) PKPassTileMetadata *metadata;
@property (nonatomic, readonly) PKPassTileState *state;
@property (nonatomic, readonly) NSString *stateIdentifier;

+ (id)createTileRowsForTiles:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithMetadata:(id)arg1 stateIdentifier:(id)arg2 state:(id)arg3 inProgress:(bool)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isInProgress;
- (id)metadata;
- (id)state;
- (id)stateIdentifier;
- (bool)supportsPaymentPassAction:(id)arg1;

@end
