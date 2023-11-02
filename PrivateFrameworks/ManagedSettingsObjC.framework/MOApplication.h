
@interface MOApplication : NSObject <MOPersistable, NSCopying> {
    NSString * _bundleIdentifier;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id persistableValue;
@property (readonly) Class superclass;

+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistableValue;

@end
