
@interface _UNNotificationContactServiceRecord : NSObject {
    NSString * _bundleIdentifier;
    _UNNotificationContact * _contact;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) _UNNotificationContact *contact;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)contact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContact:(id)arg1;

@end
