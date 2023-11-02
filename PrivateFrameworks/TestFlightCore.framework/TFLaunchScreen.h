
@interface TFLaunchScreen : NSObject {
    NSURL * _howToScreenshotSupportUrl;
    TFAppLockup * _lockup;
    NSString * _testerNotes;
}

@property (nonatomic, readonly) NSURL *howToScreenshotSupportUrl;
@property (nonatomic, readonly) TFAppLockup *lockup;
@property (nonatomic, readonly, copy) NSString *testerNotes;

- (void).cxx_destruct;
- (id)howToScreenshotSupportUrl;
- (id)initWithLockup:(id)arg1 testerNotes:(id)arg2 howToScreenshotSupportUrl:(id)arg3;
- (id)lockup;
- (id)testerNotes;

@end
