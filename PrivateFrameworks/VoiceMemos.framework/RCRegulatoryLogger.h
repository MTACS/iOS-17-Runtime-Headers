
@interface RCRegulatoryLogger : NSObject {
    struct ct_green_tea_logger_s { } * _logger;
}

@property (nonatomic, readonly) struct ct_green_tea_logger_s { }*logger;

- (void)dealloc;
- (id)init;
- (struct ct_green_tea_logger_s { }*)logger;
- (void)readingAudioData;
- (void)transmittingAudioData;

@end
