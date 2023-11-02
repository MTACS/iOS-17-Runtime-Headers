
@interface ICNAServerEnvironment : NSObject {
    NSString * _aaEndPointTypeName;
    BOOL  _serverEnvironmentType;
    NSURL * _targetURL;
}

@property (nonatomic, retain) NSString *aaEndPointTypeName;
@property BOOL serverEnvironmentType;
@property (nonatomic, retain) NSURL *targetURL;

+ (id)defaultAMSBag;
+ (id)fallbackDefaultTargetURLFromPrefs;
+ (id)ic_defaultBagKeySet;

- (void).cxx_destruct;
- (id)aaEndPointTypeName;
- (id)fallbackDefaultTargetURL;
- (id)init;
- (BOOL)serverEnvironmentType;
- (void)setAaEndPointTypeName:(id)arg1;
- (void)setServerEnvironmentType:(BOOL)arg1;
- (void)setTargetURL:(id)arg1;
- (id)targetURL;

@end
