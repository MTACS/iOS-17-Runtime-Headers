
@interface CDMCATIIntent : NSObject {
    NSString * _ensemble;
    NSString * _guid;
    NSString * _intentName;
}

@property (retain) NSString *ensemble;
@property (retain) NSString *guid;
@property (retain) NSString *intentName;

- (void).cxx_destruct;
- (id)ensemble;
- (id)guid;
- (id)init;
- (id)initWithGuid:(id)arg1 intentName:(id)arg2 ensemble:(id)arg3;
- (id)intentName;
- (void)setEnsemble:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIntentName:(id)arg1;

@end
