
@interface RTTServiceUpdate : NSObject {
    NSDictionary * _options;
    NSString * _serviceUpdateType;
}

@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) NSString *serviceUpdateType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceUpdateType:(id)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)optionValueForKey:(id)arg1;
- (id)options;
- (id)serviceUpdateType;
- (void)setOptions:(id)arg1;
- (void)setServiceUpdateType:(id)arg1;

@end
