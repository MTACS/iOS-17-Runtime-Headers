
@interface SXComponentExposureEvent : SXAnalyticsEvent {
    NSString * _componentIdentifier;
    NSString * _componentRole;
    NSString * _componentType;
    NSDictionary * _metaData;
}

@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, readonly) NSString *componentRole;
@property (nonatomic, readonly) NSString *componentType;
@property (nonatomic, readonly) NSDictionary *metaData;

- (void).cxx_destruct;
- (id)componentIdentifier;
- (id)componentRole;
- (id)componentType;
- (id)description;
- (id)initWithComponent:(id)arg1;
- (id)metaData;

@end
