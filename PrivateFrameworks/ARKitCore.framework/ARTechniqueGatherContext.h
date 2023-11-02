
@interface ARTechniqueGatherContext : NSObject <ARResultDataContext, NSSecureCoding> {
    id  _parentContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id parentContext;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorsToAdd;
- (id)anchorsToRemove;
- (long long)cameraPosition;
- (id)captureGatheredData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gatheredData;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentContext:(id)arg1;
- (id)parentContext;
- (id)resultDataOfClass:(Class)arg1;

@end
