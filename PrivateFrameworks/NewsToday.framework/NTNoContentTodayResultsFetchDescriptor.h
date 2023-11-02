
@interface NTNoContentTodayResultsFetchDescriptor : NSObject <NTTodayResultsFetchDescriptor>

@property (nonatomic, readonly) Class descriptorsOperationClass;
@property (nonatomic, readonly) Class fetchOperationClass;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)descriptorsOperationClass;
- (Class)fetchOperationClass;
- (id)init;
- (id)placeholderSectionDescriptorsWithContentRequest:(id)arg1;
- (id)sourceIdentifier;

@end
