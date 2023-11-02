
@interface PXGHitTestResult : NSObject {
    NSString * _identifier;
    bool  _isDecorated;
    PXGLayout * _layout;
    PXGSpriteReference * _spriteReference;
    id  _userData;
    id /* block */  _userDataProvider;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isDecorated;
@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) PXGSpriteReference *spriteReference;
@property (nonatomic, readonly) id userData;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userDataProvider:(id /* block */)arg4;
- (bool)isDecorated;
- (id)layout;
- (id)spriteReference;
- (id)userData;

@end
