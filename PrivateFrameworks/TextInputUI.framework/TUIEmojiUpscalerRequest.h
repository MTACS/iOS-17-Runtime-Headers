
@interface TUIEmojiUpscalerRequest : NSObject {
    id /* block */  _completion;
    NSString * _emoji;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *emoji;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)emoji;
- (void)setCompletion:(id /* block */)arg1;
- (void)setEmoji:(id)arg1;

@end
