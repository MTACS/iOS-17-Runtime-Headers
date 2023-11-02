
@interface TIFieldDescriptor : NSObject {
    NSString * _fieldDescription;
    NSString * _fieldName;
    NSObject * _inactiveValue;
    NSString * _metricName;
    NSString * _metricType;
}

@property (nonatomic, readonly) NSString *fieldDescription;
@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) NSObject *inactiveValue;
@property (nonatomic, readonly) NSString *metricName;
@property (nonatomic, readonly) NSString *metricType;

+ (id)fieldDescriptorWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5;

- (void).cxx_destruct;
- (id)fieldDescription;
- (id)fieldName;
- (id)inactiveValue;
- (id)initWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5;
- (id)metricName;
- (id)metricType;

@end
