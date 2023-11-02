
@interface WDSource : NSObject {
    HKDevice * _device;
    NSString * _name;
    HKSourceDataModel * _sourceModel;
}

@property (nonatomic, readonly) HKDevice *device;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) HKSourceDataModel *sourceModel;

- (void).cxx_destruct;
- (id)device;
- (id)initWithSource:(id)arg1 device:(id)arg2;
- (id)name;
- (id)sourceModel;

@end
