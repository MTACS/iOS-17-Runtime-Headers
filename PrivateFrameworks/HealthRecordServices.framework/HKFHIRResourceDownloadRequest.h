
@interface HKFHIRResourceDownloadRequest : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalIngestionContext * _context;
    NSURL * _fullRequestURL;
    NSDictionary * _resourceSchemaDefinition;
    NSString * _resourceType;
}

@property (nonatomic, readonly, copy) HKClinicalIngestionContext *context;
@property (nonatomic, readonly, copy) NSURL *fullRequestURL;
@property (nonatomic, readonly, copy) NSDictionary *resourceSchemaDefinition;
@property (nonatomic, readonly, copy) NSString *resourceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullRequestURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 resourceSchemaDefinition:(id)arg2 fullRequestURL:(id)arg3 context:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)resourceSchemaDefinition;
- (id)resourceType;

@end
