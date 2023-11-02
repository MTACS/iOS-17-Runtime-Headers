
@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent {
    NSNumber * _openURLSuccess;
    NSNumber * _unknownPersonsTagCount;
}

@property (nonatomic, retain) NSNumber *openURLSuccess;
@property (nonatomic, retain) NSNumber *unknownPersonsTagCount;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)openURLSuccess;
- (id)payload;
- (void)setOpenURLSuccess:(id)arg1;
- (void)setUnknownPersonsTagCount:(id)arg1;
- (id)unknownPersonsTagCount;

@end
