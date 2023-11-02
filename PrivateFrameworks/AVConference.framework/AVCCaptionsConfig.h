
@interface AVCCaptionsConfig : NSObject {
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

- (void)dealloc;
- (id)description;
- (id)locale;
- (void)setLocale:(id)arg1;

@end
