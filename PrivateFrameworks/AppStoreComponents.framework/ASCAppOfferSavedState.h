
@interface ASCAppOfferSavedState : NSObject {
    long long  _flags;
    ASCOfferMetadata * _metadata;
    NSString * _state;
}

@property (nonatomic, readonly) long long flags;
@property (nonatomic, readonly) bool isActionable;
@property (nonatomic, readonly) bool isLoadingFullState;
@property (nonatomic, readonly, copy) ASCOfferMetadata *metadata;
@property (nonatomic, readonly, copy) NSString *state;

- (void).cxx_destruct;
- (long long)flags;
- (id)initWithState:(id)arg1 metadata:(id)arg2 flags:(long long)arg3;
- (bool)isActionable;
- (bool)isLoadingFullState;
- (id)metadata;
- (id)state;

@end
