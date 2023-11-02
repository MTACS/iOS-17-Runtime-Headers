
@interface IMDDaemonPropertyManager : NSObject {
    NSMutableDictionary * _mutablePersistentProperties;
    NSMutableDictionary * _mutableProperties;
}

@property (nonatomic, retain) NSMutableDictionary *mutablePersistentProperties;
@property (nonatomic, retain) NSMutableDictionary *mutableProperties;
@property (nonatomic, readonly, copy) NSDictionary *persistentProperties;
@property (nonatomic, readonly, copy) NSDictionary *properties;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)mutablePersistentProperties;
- (id)mutableProperties;
- (id)persistentProperties;
- (id)properties;
- (void)setMutablePersistentProperties:(id)arg1;
- (void)setMutableProperties:(id)arg1;
- (void)setValue:(id)arg1 ofPersistentProperty:(id)arg2;
- (void)setValue:(id)arg1 ofProperty:(id)arg2;
- (id)valueOfPersistentProperty:(id)arg1;
- (id)valueOfProperty:(id)arg1;

@end
