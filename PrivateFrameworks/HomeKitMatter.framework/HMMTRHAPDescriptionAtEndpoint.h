
@interface HMMTRHAPDescriptionAtEndpoint : HMFObject {
    NSArray * _categories;
    NSArray * _fixedLabels;
    NSString * _name;
    NSArray * _partsList;
    NSArray * _serviceDescriptions;
}

@property (nonatomic, retain) NSArray *categories;
@property (readonly) NSArray *fixedLabels;
@property (readonly) NSString *name;
@property (readonly) NSArray *partsList;
@property (nonatomic, retain) NSArray *serviceDescriptions;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)categories;
- (id)fixedLabels;
- (id)getCategories;
- (id)getFixedLabels;
- (id)getName;
- (id)getPartsList;
- (id)getServiceDescriptions;
- (id)init;
- (id)initWithType:(id)arg1 serviceDescriptions:(id)arg2;
- (id)initWithType:(id)arg1 serviceDescriptions:(id)arg2 name:(id)arg3 partsList:(id)arg4 fixedLabels:(id)arg5;
- (id)name;
- (id)partsList;
- (id)serviceDescriptions;
- (void)setCategories:(id)arg1;
- (void)setServiceDescriptions:(id)arg1;

@end
