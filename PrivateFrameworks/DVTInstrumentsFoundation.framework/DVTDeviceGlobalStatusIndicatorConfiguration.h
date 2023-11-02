
@interface DVTDeviceGlobalStatusIndicatorConfiguration : NSObject {
    NSString * _informationText;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *informationText;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)informationText;
- (id)initWithTitle:(id)arg1 informationText:(id)arg2;
- (id)title;

@end
