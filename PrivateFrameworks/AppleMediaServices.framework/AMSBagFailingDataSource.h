
@interface AMSBagFailingDataSource : NSObject <AMSBagDataSourceProtocol> {
    double  _delay;
    NSError * _error;
    NSDate * _expirationDate;
    NSString * _profile;
    NSString * _profileVersion;
    AMSProcessInfo * processInfo;
}

@property (nonatomic, readonly, copy) NSString *bagLoadingPartialIdentifier;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (nonatomic, copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionExtended;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, copy) NSString *profile;
@property (nonatomic, copy) NSString *profileVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bagLoadingPartialIdentifier;
- (id)defaultValueForKey:(id)arg1;
- (double)delay;
- (id)error;
- (id)expirationDate;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 error:(id)arg3 delay:(double)arg4;
- (bool)isLoaded;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)setDelay:(double)arg1;
- (void)setError:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)valueForURLVariable:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;

@end
