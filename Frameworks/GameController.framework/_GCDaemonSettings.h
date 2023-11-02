
@interface _GCDaemonSettings : NSObject {
    NSUserDefaults * _defaults;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)anonymizedIdentifierForControllerIdentifier:(id)arg1;
- (id)init;
- (id)newAnonymizedIdentifiersDictionary:(id)arg1;

@end
