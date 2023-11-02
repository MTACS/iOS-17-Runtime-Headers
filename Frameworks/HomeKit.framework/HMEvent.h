
@interface HMEvent : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMObjectMerge, NSSecureCoding> {
    _HMContext * _context;
    bool  _endEvent;
    HMEventTrigger * _eventTrigger;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _triggerType;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEndEvent, nonatomic) bool endEvent;
@property (nonatomic) HMEventTrigger *eventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *triggerType;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)isSupportedForHome:(id)arg1;
+ (id)new;
+ (bool)sharedTriggerActivationSupportedForHome:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateEventWithPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateFromDictionary:(id)arg1;
- (void)_updateTriggerType;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTrigger;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (bool)isEndEvent;
- (bool)isEqual:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEndEvent:(bool)arg1;
- (void)setEventTrigger:(id)arg1;
- (id)triggerType;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
