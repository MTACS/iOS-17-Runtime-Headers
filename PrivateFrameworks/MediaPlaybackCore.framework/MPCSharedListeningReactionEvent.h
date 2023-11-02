
@interface MPCSharedListeningReactionEvent : NSObject {
    MPModelGenericObject * _item;
    NSString * _reaction;
    NSString * _reactionIdentifier;
}

@property (nonatomic, readonly) MPModelGenericObject *item;
@property (nonatomic, readonly, copy) NSString *reaction;
@property (nonatomic, readonly, copy) NSString *reactionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReaction:(id)arg1 reactionIdentifier:(id)arg2 item:(id)arg3;
- (id)item;
- (id)reaction;
- (id)reactionIdentifier;

@end
