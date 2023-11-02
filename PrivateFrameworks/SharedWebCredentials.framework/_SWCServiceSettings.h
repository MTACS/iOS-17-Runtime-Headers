
@interface _SWCServiceSettings : NSObject <NSSecureCoding, SWCRedactedDescription> {
    NSMutableDictionary * _dict;
    _SWCGeneration * _generation;
    unsigned int  _hasChanges;
    _SWCServiceSpecifier * _serviceSpecifier;
}

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) _SWCGeneration *generation;
@property (readonly) bool hasChanges;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier;

+ (id)notificationCenter;
+ (void)postChangeNotificationForServiceSpecifier:(id)arg1;
+ (bool)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id*)arg3;
+ (bool)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id*)arg3;
+ (void)serviceSettingsDidChange:(id)arg1;
+ (id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3;
- (bool)commitReturningError:(id*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)generation;
- (bool)hasChanges;
- (id)initWithCoder:(id)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)redactedDescription;
- (id)serviceSpecifier;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
