
@interface OZScript : NSObject {
    bool  _alertShown;
    JSContext * _context;
    NSRegularExpression * _paramRegex;
    NSMutableArray * _parameterDescriptors;
    NSURL * _url;
}

@property (nonatomic) bool alertShown;
@property (nonatomic, readonly) JSContext *context;
@property (nonatomic, retain) NSRegularExpression *paramRegex;
@property (nonatomic, readonly) NSMutableArray *parameterDescriptors;
@property (nonatomic, readonly) NSURL *url;

- (bool)alertShown;
- (id)context;
- (void)dealloc;
- (void)dispatch:(id)arg1;
- (void)exportObject:(id)arg1 as:(id)arg2;
- (id)init;
- (void)loadScriptWithURL:(id)arg1;
- (id)objectWithName:(id)arg1;
- (id)paramRegex;
- (id)parameterDescriptors;
- (id)preprocess:(id)arg1;
- (id)process:(id)arg1;
- (void)setAlertShown:(bool)arg1;
- (void)setParamRegex:(id)arg1;
- (id)url;

@end
