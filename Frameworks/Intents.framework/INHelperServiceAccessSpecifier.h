
@interface INHelperServiceAccessSpecifier : NSObject {
    unsigned long long  _accessLevel;
    NSString * _associatedAppBundleIdentifier;
}

@property (nonatomic, readonly) unsigned long long accessLevel;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;

+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierAppropriateForXPCConnection:(id)arg1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)accessLevel;
- (id)associatedAppBundleIdentifier;
- (id)debugDescription;
- (id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2;

@end
