
@interface BLSHEnvironmentDateSpecifier : NSObject <BLSEnvironmentDateSpecifying> {
    BLSAlwaysOnDateSpecifier * _dateSpecifier;
    <BLSHBacklightSceneHostEnvironment> * _environment;
}

@property (nonatomic, readonly) BLSAlwaysOnDateSpecifier *dateSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (nonatomic, readonly, copy) NSString *environmentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userObject;

+ (id)specifierWithPresentationDate:(id)arg1 fidelity:(long long)arg2 environment:(id)arg3;
+ (id)specifierWithPresentationDate:(id)arg1 fidelity:(long long)arg2 environment:(id)arg3 userObject:(id)arg4;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)dateSpecifier;
- (id)description;
- (id)environment;
- (id)environmentIdentifier;
- (unsigned long long)hash;
- (id)initWithPresentationDate:(id)arg1 fidelity:(long long)arg2 environment:(id)arg3 userObject:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)userObject;

@end
