
@interface UIKBTouchStateTask : NSObject <NSCopying> {
    bool  _isBusy;
    id /* block */  _task;
    UIKBTouchState * _touchState;
}

@property (nonatomic) bool isBusy;
@property (nonatomic, readonly, copy) id /* block */ task;
@property (nonatomic, readonly) UIKBTouchState *touchState;

+ (id)touchStateTaskForTouchState:(id)arg1 andTask:(id /* block */)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTouchState:(id)arg1 andTask:(id /* block */)arg2;
- (bool)isBusy;
- (void)setIsBusy:(bool)arg1;
- (id /* block */)task;
- (id)touchState;

@end
