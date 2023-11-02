
@interface WBSAvailableAppWithExtension : NSObject {
    NSString * _adamID;
    NSString * _platformSpecificBundleID;
    NSString * _requiredTeamID;
}

@property (nonatomic, readonly, copy) NSString *adamID;
@property (nonatomic, readonly, copy) NSString *platformSpecificBundleID;
@property (nonatomic, copy) NSString *requiredTeamID;

- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:(id)arg1 platformSpecificBundleID:(id)arg2;
- (id)platformSpecificBundleID;
- (id)requiredTeamID;
- (void)setRequiredTeamID:(id)arg1;

@end
