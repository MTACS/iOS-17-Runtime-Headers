
@interface PRPosterUsageMetadataAttribute : NSObject <PRPosterRoleAttribute> {
    NSDate * _creationDate;
    NSDate * _lastActivatedDate;
    NSDate * _lastModifiedDate;
    NSDate * _lastSelectedDate;
}

@property (nonatomic, readonly) NSString *attributeType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastActivatedDate;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSDate *lastSelectedDate;
@property (readonly) Class superclass;

+ (id)decodeObjectWithJSON:(id)arg1;

- (void).cxx_destruct;
- (id)attributeType;
- (id)creationDate;
- (id)description;
- (id)encodeJSON;
- (id)init;
- (id)lastActivatedDate;
- (id)lastModifiedDate;
- (id)lastSelectedDate;
- (id)usageMetadataForUpdatedLastActivatedDate:(id)arg1;
- (id)usageMetadataForUpdatedLastModifiedDate:(id)arg1;
- (id)usageMetadataWithUpdatedLastActivatedDate;
- (id)usageMetadataWithUpdatedLastModifiedDate;
- (id)usageMetadataWithUpdatedLastSelectedDate;

@end
