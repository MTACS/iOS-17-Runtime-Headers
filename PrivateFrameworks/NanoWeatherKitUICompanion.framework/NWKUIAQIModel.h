
@interface NWKUIAQIModel : NSObject {
    NSString * _categoryDescription;
    UIColor * _color;
    NSDate * _date;
    NSDate * _expiration;
    NSString * _label;
    NSString * _name;
}

@property (readonly) NSString *categoryDescription;
@property (readonly) UIColor *color;
@property (readonly) NSDate *date;
@property (readonly) NSDate *expiration;
@property (readonly) NSString *label;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)categoryDescription;
- (id)color;
- (id)date;
- (id)expiration;
- (id)initWithAirQualityConditions:(id)arg1 color:(id)arg2;
- (id)initWithName:(id)arg1 label:(id)arg2 categoryDescription:(id)arg3 color:(id)arg4 date:(id)arg5 expiration:(id)arg6;
- (id)label;
- (id)name;

@end
