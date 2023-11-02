
@interface RTEventAgentHelper : NSObject {
    NSString * _restorationIdentifier;
}

@property (nonatomic, retain) NSString *restorationIdentifier;

+ (bool)launchdManaged;
+ (id)signingIdentifierFromSelf;

- (void).cxx_destruct;
- (id)initWithRestorationIdentifier:(id)arg1;
- (id)restorationIdentifier;
- (void)setRestorationIdentifier:(id)arg1;

@end