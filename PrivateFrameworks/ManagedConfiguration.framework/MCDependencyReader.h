
@interface MCDependencyReader : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableDictionary * _memberQueueSystemDomainsDict;
    NSMutableDictionary * _memberQueueUserDomainsDict;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemDomainsDict;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserDomainsDict;

+ (void)setSystemStoragePath:(id)arg1 userStoragePath:(id)arg2;
+ (id)sharedReader;
+ (id)systemStoragePath;
+ (id)userStoragePath;

- (void).cxx_destruct;
- (id)_init;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)dependentsOfParent:(id)arg1 inSystemDomain:(id)arg2;
- (id)dependentsOfParent:(id)arg1 inUserDomain:(id)arg2;
- (id)init;
- (void)invalidateCache;
- (id)memberQueue;
- (id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)memberQueueDependentsOfParent:(id)arg1 inSystemDomain:(id)arg2;
- (id)memberQueueDependentsOfParent:(id)arg1 inUserDomain:(id)arg2;
- (id)memberQueueParentsInDomain:(id)arg1;
- (id)memberQueueParentsInSystemDomain:(id)arg1;
- (id)memberQueueParentsInUserDomain:(id)arg1;
- (void)memberQueueRereadDomainsDict;
- (void)memberQueueRereadSystemDomainsDict;
- (void)memberQueueRereadUserDomainsDict;
- (id)memberQueueSystemDomainsDict;
- (id)memberQueueUserDomainsDict;
- (id)parentsInDomain:(id)arg1;
- (id)parentsInSystemDomain:(id)arg1;
- (id)parentsInUserDomain:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueSystemDomainsDict:(id)arg1;
- (void)setMemberQueueUserDomainsDict:(id)arg1;
- (id)systemDomainsDict;
- (id)userDomainsDict;

@end
