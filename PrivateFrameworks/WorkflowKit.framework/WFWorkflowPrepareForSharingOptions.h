
@interface WFWorkflowPrepareForSharingOptions : NSObject {
    bool  _clearsImportQuestionData;
    NSSet * _quickActionSurfaces;
}

@property (nonatomic) bool clearsImportQuestionData;
@property (nonatomic, retain) NSSet *quickActionSurfaces;

- (void).cxx_destruct;
- (bool)clearsImportQuestionData;
- (id)init;
- (id)quickActionSurfaces;
- (void)setClearsImportQuestionData:(bool)arg1;
- (void)setQuickActionSurfaces:(id)arg1;

@end
