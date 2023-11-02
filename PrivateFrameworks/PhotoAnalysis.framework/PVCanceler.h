
@interface PVCanceler : NSObject {
    bool  _canceled;
    id /* block */  _updateBlock;
}

@property (nonatomic) bool canceled;
@property (nonatomic, copy) id /* block */ updateBlock;

+ (id)cancelerWithUpdateBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)canceled;
- (void)setCanceled:(bool)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;

@end
