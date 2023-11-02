
@interface HKOverlayPillValue : NSObject {
    NSString * _unitString;
    NSString * _valueString;
}

@property (nonatomic, readonly) NSString *unitString;
@property (nonatomic, readonly) NSString *valueString;

- (void).cxx_destruct;
- (id)initWithValueString:(id)arg1 unitString:(id)arg2;
- (id)unitString;
- (id)valueString;

@end
