
@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedUserDefaults;

- (id)dataForKey:(id)arg1;
- (void)removeDataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;

@end
