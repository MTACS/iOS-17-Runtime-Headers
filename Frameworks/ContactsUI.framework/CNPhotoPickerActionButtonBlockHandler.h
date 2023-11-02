
@interface CNPhotoPickerActionButtonBlockHandler : NSObject {
    id /* block */  _actionBlock;
}

@property (nonatomic, readonly, copy) id /* block */ actionBlock;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)initWithActionBlock:(id /* block */)arg1;
- (void)performAction;

@end
