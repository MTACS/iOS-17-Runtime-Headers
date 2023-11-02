
@interface _GCXRComponent : NSObject <GCXRComponent> {
    GCController * _controller;
    NSMutableDictionary * _handSkeletons;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    _GCHandSkeleton * _leftHandSkeleton;
    GCPhysicalInputProfile * _physicalInput;
    _GCHandSkeleton * _rightHandSkeleton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *handSkeletons;
@property (readonly) unsigned long long hash;
@property (retain) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

+ (id)componentWithPhysicalInputProfile:(id)arg1;

- (void).cxx_destruct;
- (id)handSkeletons;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setController:(id)arg1;
- (void)setHandSkeletons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)updateSkeletons;

@end
