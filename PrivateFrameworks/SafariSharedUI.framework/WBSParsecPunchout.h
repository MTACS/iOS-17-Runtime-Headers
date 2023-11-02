
@interface WBSParsecPunchout : WBSParsecModel {
    NSString * _bundleID;
    NSURL * _installURL;
    NSString * _name;
    NSString * _punchoutLabel;
    NSURL * _punchoutURL;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) NSURL *installURL;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *punchoutLabel;
@property (nonatomic, readonly) NSURL *punchoutURL;

+ (id)schema;

- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithDictionary:(id)arg1;
- (id)installURL;
- (id)name;
- (id)punchoutLabel;
- (id)punchoutURL;

@end
