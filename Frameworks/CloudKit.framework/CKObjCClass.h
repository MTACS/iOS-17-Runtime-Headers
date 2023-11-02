
@interface CKObjCClass : NSObject {
    Class  _handle;
    NSString * _name;
    NSDictionary * _propertiesByName;
    NSArray * _sortedProperties;
}

@property (nonatomic, readonly) Class handle;
@property (nonatomic, readonly) NSString *name;

+ (id)classForHandle:(Class)arg1;
+ (id)classForObject:(id)arg1;

- (void).cxx_destruct;
- (id)allProperties;
- (Class)handle;
- (id)initWithHandle:(Class)arg1;
- (id)name;
- (id)propertyForName:(id)arg1;

@end
