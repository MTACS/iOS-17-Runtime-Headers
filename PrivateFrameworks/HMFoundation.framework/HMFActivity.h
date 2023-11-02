
@interface HMFActivity : HMFObject <HMFActivityMarking, HMFLogging, HMFObject> {
    NSMutableDictionary * _associatedObjects;
    NSUUID * _identifier;
    NSObject<OS_os_activity> * _internal;
    NSArray * _internalAssertions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    unsigned long long  _options;
    HMFActivity * _parent;
    unsigned long long  _startMachTime;
    NSMutableSet * _threadContexts;
    bool  _valid;
    NSObject<OS_voucher> * _voucher;
}

@property (readonly) unsigned long long assertions;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, copy) NSString *clientMetricIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long options;
@property (readonly) HMFActivity *parent;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (getter=hasStarted, readonly) bool started;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMMTagSessionProcessorList *tagProcessorList;
@property (getter=isValid, readonly) bool valid;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)_currentActivity;
+ (void)activityWithName:(id)arg1 block:(id /* block */)arg2;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(id /* block */)arg4;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 block:(id /* block */)arg3;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
+ (id)bundleIdentifier;
+ (id)currentActivity;
+ (id)currentActivityForMarking;
+ (id)currentClientMetricIdentifier;
+ (void)initialize;
+ (id)logCategory;
+ (void)markCurrentActivity;
+ (void)markCurrentActivityWithFormat:(id)arg1;
+ (void)markCurrentActivityWithReason:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)_associatedObjectForKey:(id)arg1;
- (void)_setAssociatedObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)assertions;
- (id)attributeDescriptions;
- (void)begin;
- (id /* block */)blockWithBlock:(id /* block */)arg1;
- (id /* block */)blockWithQualityOfService:(long long)arg1 block:(id /* block */)arg2;
- (id)clientMetricIdentifier;
- (void)dealloc;
- (void)end;
- (bool)hasStarted;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 parent:(id)arg3 assertions:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 parent:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)logIdentifier;
- (void)mark;
- (void)markWithFormat:(id)arg1;
- (void)markWithReason:(id)arg1;
- (id)name;
- (unsigned long long)options;
- (id)parent;
- (void)performBlock:(id /* block */)arg1;
- (void)setClientMetricIdentifier:(id)arg1;
- (id)shortDescription;
- (void)synchronizeWithActivityLock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics

+ (id)currentTagProcessorList;

- (id)tagProcessorList;

@end
