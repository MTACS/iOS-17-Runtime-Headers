
@interface FCHeadlineExperimentalTitleMetadata : NSObject {
    long long  _arrayIndexUsedforTitle;
    NSString * _chosenTitle;
    bool  _isTitleExperimental;
    int  _treatmentState;
}

@property (nonatomic, readonly) long long arrayIndexUsedforTitle;
@property (nonatomic, readonly, copy) NSString *chosenTitle;
@property (nonatomic, readonly) bool isTitleExperimental;
@property (nonatomic, readonly) int treatmentState;

- (void).cxx_destruct;
- (long long)arrayIndexUsedforTitle;
- (id)chosenTitle;
- (id)initWithChosenTitle:(id)arg1 isTitleExperimental:(bool)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4;
- (bool)isTitleExperimental;
- (int)treatmentState;

@end
