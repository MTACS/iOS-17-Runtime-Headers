
@protocol WebOpenPanelResultListener <NSObject>

@required

- (void)cancel;
- (void)chooseFilename:(NSString *)arg1;
- (void)chooseFilename:(NSString *)arg1 displayString:(NSString *)arg2 iconImage:(struct CGImage { }*)arg3;
- (void)chooseFilenames:(NSArray *)arg1;
- (void)chooseFilenames:(NSArray *)arg1 displayString:(NSString *)arg2 iconImage:(struct CGImage { }*)arg3;

@end
