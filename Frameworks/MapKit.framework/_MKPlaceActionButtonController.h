
@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate> {
    int  _analyticsAction;
    id /* block */  _buttonSelectedBlock;
    NSString * _buttonSubTitle;
    NSString * _buttonTitle;
    <_MKPlaceActionControlledButton> * _delegate;
    bool  _disabled;
    NSString * _symbolName;
}

@property (nonatomic, readonly) int analyticsAction;
@property (nonatomic, readonly) id /* block */ buttonSelectedBlock;
@property (nonatomic, readonly) NSString *buttonSubTitle;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MKPlaceActionControlledButton> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(id /* block */)arg3;
+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(id /* block */)arg3 disabled:(bool)arg4 symbolName:(id)arg5;

- (void).cxx_destruct;
- (int)analyticsAction;
- (id /* block */)buttonSelectedBlock;
- (id)buttonSubTitle;
- (void)buttonTextChanged;
- (id)buttonTitle;
- (id)delegate;
- (bool)disabled;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(id /* block */)arg4 disabled:(bool)arg5 symbolName:(id)arg6;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (id)symbolName;

@end
