
@interface AMDDescriptor : NSManagedObject

@property (nonatomic, retain) NSData *descriptor;
@property (nonatomic) short domain;
@property (nonatomic, copy) NSString *featureName;

+ (id)deleteAll:(id*)arg1;
+ (id)fetchRequest;
+ (id)getDescriptorsForDomain:(long long)arg1 error:(id*)arg2;
+ (id)refreshDescriptors:(id)arg1 forDomain:(long long)arg2 error:(id*)arg3;

@end
