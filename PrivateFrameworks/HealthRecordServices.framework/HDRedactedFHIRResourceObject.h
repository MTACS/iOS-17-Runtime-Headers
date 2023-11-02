
@interface HDRedactedFHIRResourceObject : HDFHIRJSONObject {
    NSString * _resourceType;
}

@property (nonatomic, readonly, copy) NSString *resourceType;

+ (id)resourceObjectWithFHIRJSONObject:(id)arg1 redactedJSONObject:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithResourceType:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 JSONObject:(id)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resourceType;

@end
