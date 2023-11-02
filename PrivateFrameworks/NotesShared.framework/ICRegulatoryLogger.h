
@interface ICRegulatoryLogger : NSObject {
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
}

@property (nonatomic) struct ct_green_tea_logger_s { }*greenTeaLogger;

- (void)dealloc;
- (void)didAddAttachment:(id)arg1;
- (void)didPushAttachmentToiCloud:(id)arg1;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)init;
- (void)setGreenTeaLogger:(struct ct_green_tea_logger_s { }*)arg1;

@end
