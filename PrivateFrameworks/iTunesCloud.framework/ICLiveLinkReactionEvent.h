
@interface ICLiveLinkReactionEvent : NSObject {
    NSString * _itemIdentifier;
    NSString * _reaction;
    NSString * _reactionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, readonly, copy) NSString *reaction;
@property (nonatomic, readonly, copy) NSString *reactionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReaction:(id)arg1 reactionIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)itemIdentifier;
- (id)reaction;
- (id)reactionIdentifier;

@end
