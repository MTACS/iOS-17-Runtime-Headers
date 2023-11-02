
@interface APMutableLogConfig : APLogConfig <NSCopying>

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *subsystem;

@end
