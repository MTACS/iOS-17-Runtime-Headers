
@interface MSRadarInteraction : NSObject {
    NSString * _cancelButtonTitle;
    id /* block */  _cancelHandler;
    NSString * _maybeLaterButtonTitle;
    id /* block */  _maybeLaterHandler;
    NSString * _message;
    NSString * _openButtonTitle;
    id /* block */  _openHandler;
    NSURL * _radarURL;
    NSString * _title;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, readonly) UIAlertController *interactionViewController;
@property (nonatomic, copy) NSString *maybeLaterButtonTitle;
@property (nonatomic, copy) id /* block */ maybeLaterHandler;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, copy) NSString *openButtonTitle;
@property (nonatomic, copy) id /* block */ openHandler;
@property (nonatomic, readonly) NSURL *radarURL;
@property (nonatomic, readonly) NSString *title;

+ (id)interactionWithTitle:(id)arg1 message:(id)arg2 builder:(id /* block */)arg3;
+ (id)interactionWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3;

- (void).cxx_destruct;
- (id)cancelButtonTitle;
- (id /* block */)cancelHandler;
- (id)initWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3;
- (id)interactionViewController;
- (id)maybeLaterButtonTitle;
- (id /* block */)maybeLaterHandler;
- (id)message;
- (id)openButtonTitle;
- (id /* block */)openHandler;
- (void)openTapToRadar;
- (void)promptToFile;
- (void)promptToFileWithCompletionHandler:(id /* block */)arg1;
- (id)radarURL;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setMaybeLaterButtonTitle:(id)arg1;
- (void)setMaybeLaterHandler:(id /* block */)arg1;
- (void)setOpenButtonTitle:(id)arg1;
- (void)setOpenHandler:(id /* block */)arg1;
- (id)title;

@end
