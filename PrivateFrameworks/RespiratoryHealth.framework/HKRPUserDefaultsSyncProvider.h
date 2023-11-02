
@interface HKRPUserDefaultsSyncProvider : NSObject <HKRPUserDefaultsSyncProviding> {
    NPSManager * _manager;
    NSString * _userDefaultsDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userDefaultsDomain;

- (void).cxx_destruct;
- (id)initWithUserDefaultsDomain:(id)arg1;
- (void)synchronizeKeys:(id)arg1;
- (id)userDefaultsDomain;

@end
