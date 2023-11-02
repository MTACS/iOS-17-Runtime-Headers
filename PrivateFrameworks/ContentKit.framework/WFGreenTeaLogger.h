
@interface WFGreenTeaLogger : NSObject {
    struct ct_green_tea_logger_s { } * _logger;
}

@property (nonatomic, readonly) struct ct_green_tea_logger_s { }*logger;

+ (void)log:(id)arg1;
+ (id)sharedLogger;

- (void)dealloc;
- (id)init;
- (void)log:(id)arg1;
- (struct ct_green_tea_logger_s { }*)logger;

@end
