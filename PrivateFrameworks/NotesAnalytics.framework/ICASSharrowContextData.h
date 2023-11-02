
@interface ICASSharrowContextData : NSObject <AADataEventType> {
    NSString * _sharrowSelectedItem;
}

@property (nonatomic, readonly) NSString *sharrowSelectedItem;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSharrowSelectedItem:(id)arg1;
- (id)sharrowSelectedItem;
- (id)toDict;

@end
