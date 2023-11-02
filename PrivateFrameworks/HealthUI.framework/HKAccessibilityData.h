
@interface HKAccessibilityData : NSObject {
    NSArray * _accessibilityPointData;
    NSDictionary * _accessibilitySpans;
}

@property (nonatomic, readonly) NSArray *accessibilityPointData;
@property (nonatomic, readonly) NSDictionary *accessibilitySpans;

- (void).cxx_destruct;
- (id)accessibilityPointData;
- (id)accessibilitySpans;
- (id)description;
- (id)initWithPointData:(id)arg1 accessibilitySpans:(id)arg2;

@end
