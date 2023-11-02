
@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric> {
    NSString * _containerIdentifier;
    NSString * _processName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;

- (void)dealloc;
- (id)description;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)name;
- (id)payload;

@end
