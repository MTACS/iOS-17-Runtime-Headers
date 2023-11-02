
@interface MCMContainer : NSObject {
    long long  _containerClass;
    NSString * _identifier;
    NSString * _personaUniqueString;
    struct container_object_s { } * _thisContainer;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) long long containerClass;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (getter=isTemporary, nonatomic, readonly) bool temporary;
@property (nonatomic, readonly) struct container_object_s { }*thisContainer;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)containerWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 error:(id*)arg4;
+ (id)containerWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)temporaryContainerWithIdentifier:(id)arg1 existed:(bool*)arg2 error:(id*)arg3;
+ (long long)typeContainerClass;

- (void).cxx_destruct;
- (void)_errorOccurred;
- (bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;
- (long long)containerClass;
- (void)dealloc;
- (id)description;
- (id)destroyContainerWithCompletion:(id /* block */)arg1;
- (unsigned long long)diskUsageWithError:(id*)arg1;
- (struct container_object_s { }*)getLowLevelContainerObject;
- (unsigned long long)hash;
- (id)identifier;
- (id)info;
- (id)infoValueForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 temp:(bool)arg4 error:(id*)arg5;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2 uniquePathComponent:(id)arg3 uuid:(id)arg4 personaUniqueString:(id)arg5 uid:(unsigned int)arg6 error:(id*)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainer:(id)arg1;
- (bool)isTemporary;
- (void)markDeleted;
- (id)personaUniqueString;
- (bool)recreateDefaultStructureWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct container_object_s { }*)thisContainer;
- (id)url;
- (id)uuid;

@end
