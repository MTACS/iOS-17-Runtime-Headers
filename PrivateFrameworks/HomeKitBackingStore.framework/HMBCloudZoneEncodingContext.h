
@interface HMBCloudZoneEncodingContext : HMBModelContainerEncodingContext {
    NSMutableDictionary * _createdRecords;
}

@property (nonatomic, readonly) NSMutableDictionary *createdRecords;

- (void).cxx_destruct;
- (id)createdRecords;
- (id)init;

@end
