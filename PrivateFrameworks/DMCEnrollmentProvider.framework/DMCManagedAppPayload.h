
@interface DMCManagedAppPayload : MCPayload {
    NSString * _managedAppID;
}

@property (nonatomic, retain) NSString *managedAppID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithManagedAppID:(id)arg1 profile:(id)arg2;
- (id)managedAppID;
- (void)setManagedAppID:(id)arg1;
- (id)title;

@end
