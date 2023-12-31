
@interface HFServiceState : NSObject

@property (nonatomic, readonly) long long primaryState;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) NSString *stateTypeIdentifier;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

+ (id)optionalCharacteristicTypes;
+ (id)requiredCharacteristicTypes;
+ (Class)stateClassForServiceDescriptor:(id)arg1;
+ (id)stateClassIdentifier;
+ (id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2;

- (id)initWithBatchReadResponse:(id)arg1;
- (bool)isTransitioning;

@end
