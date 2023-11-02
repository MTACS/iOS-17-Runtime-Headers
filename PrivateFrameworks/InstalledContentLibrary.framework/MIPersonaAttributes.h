
@interface MIPersonaAttributes : NSObject {
    NSSet * _bundleIDs;
    unsigned long long  _personaType;
    NSString * _personaUniqueString;
}

@property (nonatomic, readonly, copy) NSSet *bundleIDs;
@property (nonatomic, readonly) unsigned long long personaType;
@property (nonatomic, readonly, copy) NSString *personaUniqueString;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)initWithPersonaString:(id)arg1 personaType:(unsigned long long)arg2 associatedBundleIDs:(id)arg3;
- (unsigned long long)personaType;
- (id)personaUniqueString;

@end
