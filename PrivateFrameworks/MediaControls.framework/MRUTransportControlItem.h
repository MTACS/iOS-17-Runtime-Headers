
@interface MRUTransportControlItem : NSObject {
    MRUAsset * _asset;
    id /* block */  _holdBeganAction;
    id /* block */  _holdEndAction;
    NSString * _identifier;
    id /* block */  _mainAction;
}

@property (nonatomic, readonly) MRUAsset *asset;
@property (nonatomic, readonly) id /* block */ holdBeganAction;
@property (nonatomic, readonly) id /* block */ holdEndAction;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) id /* block */ mainAction;
@property (nonatomic, readonly) bool supportsHolding;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (id /* block */)holdBeganAction;
- (id /* block */)holdEndAction;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 asset:(id)arg2 mainAction:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1 asset:(id)arg2 mainAction:(id /* block */)arg3 holdBeganAction:(id /* block */)arg4 holdEndAction:(id /* block */)arg5;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id /* block */)mainAction;
- (bool)supportsHolding;

@end
