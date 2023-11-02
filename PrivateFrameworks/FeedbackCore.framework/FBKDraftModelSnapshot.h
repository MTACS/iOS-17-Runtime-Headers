
@interface FBKDraftModelSnapshot : NSObject {
    NSDictionary * _deviceIdToAttachments;
    NSArray * _devices;
    NSDictionary * _questionGroupIdToQuestions;
    NSArray * _questionGroups;
}

@property (nonatomic, readonly) NSArray *allAttachments;
@property (nonatomic, readonly) NSArray *allQuestions;
@property (nonatomic, retain) NSDictionary *deviceIdToAttachments;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, readonly) bool hasAnyDevices;
@property (nonatomic, retain) NSDictionary *questionGroupIdToQuestions;
@property (nonatomic, retain) NSArray *questionGroups;
@property (nonatomic, readonly) NSArray *sections;

- (void).cxx_destruct;
- (id)allAttachments;
- (id)allQuestions;
- (id)deviceIdToAttachments;
- (id)devices;
- (bool)hasAnyDevices;
- (id)initWithQuestionGroups:(id)arg1 questions:(id)arg2 deviceDiagnostics:(id)arg3;
- (id)questionGroupIdToQuestions;
- (id)questionGroups;
- (id)rowsForSection:(id)arg1;
- (id)sections;
- (void)setDeviceIdToAttachments:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setQuestionGroupIdToQuestions:(id)arg1;
- (void)setQuestionGroups:(id)arg1;

@end
