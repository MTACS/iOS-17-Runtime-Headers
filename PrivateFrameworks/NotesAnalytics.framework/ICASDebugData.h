
@interface ICASDebugData : NSObject <AADataEventType> {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)toDict;

@end
