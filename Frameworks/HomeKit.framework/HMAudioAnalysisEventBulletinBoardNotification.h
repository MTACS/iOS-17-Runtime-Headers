
@interface HMAudioAnalysisEventBulletinBoardNotification : HMBulletinBoardNotification {
    NSUUID * _accessoryIdentifier;
}

@property (copy) NSUUID *accessoryIdentifier;
@property (readonly) unsigned long long options;

+ (id)predicateForAudioAnalysisOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (id)accessoryIdentifier;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBulletinBoardNotification:(id)arg1;
- (unsigned long long)options;
- (void)setAccessoryIdentifier:(id)arg1;

@end
