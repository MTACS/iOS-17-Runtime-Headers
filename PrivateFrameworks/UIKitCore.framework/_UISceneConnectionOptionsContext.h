
@interface _UISceneConnectionOptionsContext : NSObject {
    NSSet * _cleanupBlocks;
    NSDictionary * _launchOptionsDictionary;
    NSSet * _unprocessedActions;
}

@property (nonatomic, retain) NSDictionary *launchOptionsDictionary;
@property (nonatomic, retain) NSSet *unprocessedActions;

- (void).cxx_destruct;
- (id)launchOptionsDictionary;
- (void)setLaunchOptionsDictionary:(id)arg1;
- (void)setUnprocessedActions:(id)arg1;
- (id)unprocessedActions;

@end
