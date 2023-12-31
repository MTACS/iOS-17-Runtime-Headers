
@interface SignpostSupportSubsystemCategoryFilterEntry : NSObject {
    NSString * _category;
    NSString * _subsystem;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *subsystem;

- (void).cxx_destruct;
- (id)category;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)subsystem;

@end
