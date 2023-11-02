
@interface ARWorldTrackingReferenceAnchorData : NSObject <ARResultData, NSSecureCoding> {
    NSSet * _addedAnchors;
    NSSet * _externalAnchors;
    NSSet * _receivedAnchors;
    NSSet * _removedAnchors;
    double  _timestamp;
    NSSet * _updatedAnchors;
}

@property (nonatomic, readonly) NSSet *addedAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *externalAnchors;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *receivedAnchors;
@property (nonatomic, readonly) NSSet *removedAnchors;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) NSSet *updatedAnchors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedAnchors;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAnchors;
- (id)externalAnchorsWithReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 existingAnchors:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdatedAnchors:(id)arg1 addedAnchors:(id)arg2 removedAnchors:(id)arg3 externalAnchors:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)receivedAnchors;
- (id)removedAnchors;
- (void)setReceivedAnchors:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)updatedAnchors;

@end
