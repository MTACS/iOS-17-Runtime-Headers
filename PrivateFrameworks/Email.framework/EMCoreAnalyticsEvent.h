
@interface EMCoreAnalyticsEvent : NSObject {
    NSDictionary * _data;
    NSString * _name;
}

@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)data;
- (id)initWithEventName:(id)arg1 collectionData:(id)arg2;
- (id)name;

@end
