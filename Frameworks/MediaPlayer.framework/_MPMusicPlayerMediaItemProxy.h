
@interface _MPMusicPlayerMediaItemProxy : NSProxy {
    MPMediaItem * _item;
    NSString * _itemIdentifier;
}

@property (nonatomic, readonly) MPMediaItem *item;
@property (nonatomic, readonly) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 item:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)itemIdentifier;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
