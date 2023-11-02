
@interface NLLogCategory : NSObject {
    NSObject<OS_os_log> * _internal;
    NSString * _loggingCategory;
    NSString * _loggingSubsystem;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *internal;
@property (nonatomic, readonly) NSString *loggingCategory;
@property (nonatomic, readonly) NSString *loggingSubsystem;

+ (void)_addCategory:(id)arg1 inSubsystem:(id)arg2;
+ (id)_getCategory:(id)arg1;
+ (id)categoryWithName:(id)arg1;
+ (id)categoryWithName:(id)arg1 inSubsystem:(id)arg2;
+ (id)defaultCategory;
+ (void)initialize;

- (void).cxx_destruct;
- (id)initCategory:(id)arg1 inSubsystem:(id)arg2;
- (id)internal;
- (id)loggingCategory;
- (id)loggingSubsystem;

@end
