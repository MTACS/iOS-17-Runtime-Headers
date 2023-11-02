
@protocol WFAlertPresenter <NSObject>

@required

- (void)dismissAlert:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: WFAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(WFAlertButton *)arg2 forAlert:(WFAlert *)arg3;
- (void)setButtons:(NSArray *)arg1 forAlert:(WFAlert *)arg2;

@end
