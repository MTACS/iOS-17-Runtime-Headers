
@interface HKClinicalSampleAccountDataBatch : NSObject {
    NSDictionary * _resourceObjectsByResourceType;
}

@property (nonatomic, copy) NSDictionary *resourceObjectsByResourceType;

- (void).cxx_destruct;
- (id)resourceObjectsByResourceType;
- (void)setResourceObjectsByResourceType:(id)arg1;

@end
