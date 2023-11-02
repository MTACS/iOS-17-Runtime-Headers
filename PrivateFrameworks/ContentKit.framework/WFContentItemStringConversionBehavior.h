
@interface WFContentItemStringConversionBehavior : NSObject {
    NSString * _behaviorDescription;
    WFContentProperty * _property;
}

@property (nonatomic, readonly) NSString *behaviorDescription;
@property (nonatomic, readonly) WFContentProperty *property;

+ (id)accessingProperty:(id)arg1;
+ (id)coercingToStringWithDescription:(id)arg1;

- (void).cxx_destruct;
- (id)behaviorDescription;
- (id)initWithProperty:(id)arg1 description:(id)arg2;
- (id)property;

@end
