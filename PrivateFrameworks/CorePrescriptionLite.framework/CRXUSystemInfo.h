
@interface CRXUSystemInfo : NSObject {
    NSString * _modelName;
}

@property (nonatomic, readonly) NSString *modelName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)modelName;

@end
