
@interface VIUserFeedback : NSObject <NSCopying> {
    <VIImageContent> * _image;
    NSString * _reportIdentifier;
    NSData * _sfReportData;
    NSData * _userFeedbackPayload;
}

@property (nonatomic, readonly) <VIImageContent> *image;
@property (nonatomic, readonly, copy) NSString *reportIdentifier;
@property (nonatomic, readonly, copy) NSData *sfReportData;
@property (nonatomic, readonly, copy) NSData *userFeedbackPayload;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)image;
- (id)initWithImage:(id)arg1 payload:(id)arg2 reportIdentifier:(id)arg3;
- (id)initWithImage:(id)arg1 userFeedbackPayload:(id)arg2 sfReportData:(id)arg3 reportIdentifier:(id)arg4;
- (id)reportIdentifier;
- (id)sfReportData;
- (id)userFeedbackPayload;

@end
