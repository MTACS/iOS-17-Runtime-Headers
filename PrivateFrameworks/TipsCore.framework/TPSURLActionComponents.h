
@interface TPSURLActionComponents : NSObject {
    NSURL * _URL;
    unsigned long long  _actionType;
    NSString * _bundleID;
    NSString * _identifier;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *identifier;

+ (unsigned long long)_actionTypeForString:(id)arg1;
+ (id)componentsWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (void)_parseURL:(id)arg1;
- (unsigned long long)actionType;
- (id)bundleID;
- (id)identifier;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setActionType:(unsigned long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setURL:(id)arg1;

@end
