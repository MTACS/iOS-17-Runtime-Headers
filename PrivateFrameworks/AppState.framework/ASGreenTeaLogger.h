
@interface ASGreenTeaLogger : NSObject {
    struct ct_green_tea_logger_s { } * _logger;
}

@property (nonatomic, readonly) struct ct_green_tea_logger_s { }*logger;

- (void)dealloc;
- (id)init;
- (struct ct_green_tea_logger_s { }*)logger;
- (void)willAccessLocationForSearch;
- (void)willRequestAppList;
- (void)willTransmitLocationForSearch;

@end
