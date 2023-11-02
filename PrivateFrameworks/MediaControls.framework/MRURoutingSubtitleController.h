
@interface MRURoutingSubtitleController : NSObject {
    <MRURoutingSubtitleControllerDelegate> * _delegate;
    long long  _state;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long accessory;
@property (nonatomic, readonly) bool canTransitionToNextState;
@property (nonatomic) <MRURoutingSubtitleControllerDelegate> *delegate;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) long long state;
@property (nonatomic, retain) NSMutableDictionary *storage;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (long long)accessory;
- (bool)canTransitionToNextState;
- (id)delegate;
- (id)description;
- (bool)hasText;
- (id)icon;
- (id)init;
- (long long)nextAvailableTextState;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setText:(id)arg1 forState:(long long)arg2;
- (void)setText:(id)arg1 forState:(long long)arg2 accessory:(long long)arg3;
- (void)setText:(id)arg1 icon:(id)arg2 forState:(long long)arg3;
- (void)setText:(id)arg1 icon:(id)arg2 forState:(long long)arg3 accessory:(long long)arg4;
- (long long)state;
- (id)storage;
- (id)text;
- (void)transitionToNextAvailableState;

@end
