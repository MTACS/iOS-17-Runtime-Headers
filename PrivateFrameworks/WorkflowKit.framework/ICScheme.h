
@interface ICScheme : NSObject {
    NSArray * _actions;
    ICApp * _app;
    NSArray * _capabilities;
    NSDictionary * _definition;
    NSString * _scheme;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) ICApp *app;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) NSString *callbackCancelURLKey;
@property (nonatomic, readonly) NSString *callbackErrorURLKey;
@property (getter=isCallbackScheme, nonatomic, readonly) bool callbackScheme;
@property (nonatomic, readonly) NSString *callbackSourceNameKey;
@property (nonatomic, readonly) NSString *callbackSuccessURLKey;
@property (nonatomic, readonly) bool canLaunchApp;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly, copy) NSDictionary *definition;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSURL *universalLinkBaseURL;

- (void).cxx_destruct;
- (id)actions;
- (id)app;
- (id)callbackCancelURLKey;
- (id)callbackErrorURLKey;
- (id)callbackSourceNameKey;
- (id)callbackSuccessURLKey;
- (bool)canLaunchApp;
- (id)capabilities;
- (id)definition;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;
- (bool)isAvailable;
- (bool)isCallbackScheme;
- (bool)isEqual:(id)arg1;
- (bool)matchesURL:(id)arg1;
- (id)scheme;
- (id)universalLinkBaseURL;

@end
