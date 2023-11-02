
@interface PXBannerViewConfiguration : NSObject <NSCopying> {
    id /* block */  _actionButtonHandler;
    NSString * _actionButtonTitle;
    NSString * _cancelActionIdentifier;
    id /* block */  _cancelButtonHandler;
    NSString * _cancelButtonTitle;
    NSString * _primaryActionIdentifier;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ actionButtonHandler;
@property (nonatomic, readonly, copy) NSString *actionButtonTitle;
@property (nonatomic, readonly, copy) NSString *cancelActionIdentifier;
@property (nonatomic, readonly, copy) id /* block */ cancelButtonHandler;
@property (nonatomic, readonly, copy) NSString *cancelButtonTitle;
@property (nonatomic, readonly, copy) NSString *primaryActionIdentifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) bool wantsActionButton;
@property (nonatomic, readonly) bool wantsCancelButton;

- (void).cxx_destruct;
- (id /* block */)actionButtonHandler;
- (id)actionButtonTitle;
- (id)cancelActionIdentifier;
- (id /* block */)cancelButtonHandler;
- (id)cancelButtonTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionButtonHandler:(id /* block */)arg5 cancelButtonHandler:(id /* block */)arg6 primaryActionIdentifier:(id)arg7 cancelActionIdentifier:(id)arg8;
- (id)primaryActionIdentifier;
- (id)subtitle;
- (id)title;
- (bool)wantsActionButton;
- (bool)wantsCancelButton;

@end
