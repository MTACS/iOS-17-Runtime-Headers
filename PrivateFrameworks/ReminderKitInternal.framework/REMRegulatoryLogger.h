
@interface REMRegulatoryLogger : NSObject {
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
}

@property (nonatomic) struct ct_green_tea_logger_s { }*greenTeaLogger;

+ (void)attachmentAddedForType:(long long)arg1;
+ (void)attachmentAddedForUTType:(id)arg1;
+ (void)attachmentPushedToiCloudForType:(long long)arg1;
+ (void)attachmentPushedToiCloudForUTType:(id)arg1;
+ (long long)attachmentTypeFromUTType:(id)arg1;
+ (id)sharedLogger;

- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)init;
- (void)setGreenTeaLogger:(struct ct_green_tea_logger_s { }*)arg1;

@end
