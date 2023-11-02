
@interface AALoginResponseDataclasses : NSObject {
    NSDictionary * _dataclassProperties;
    NSArray * _provisionedDataclasses;
}

@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (nonatomic, readonly) NSArray *provisionedDataclasses;

- (void).cxx_destruct;
- (id)dataclassProperties;
- (id)initWithiCloudServiceData:(id)arg1;
- (id)provisionedDataclasses;

@end
