
@interface FBKSCustomBehavior : NSObject {
    NSDictionary * _answers;
    NSNumber * _formId;
    bool  _isCaptive;
    bool  _launchNewDraft;
    bool  _makeVisible;
    bool  _notifyOnUpload;
}

@property (nonatomic, retain) NSDictionary *answers;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *formId;
@property (nonatomic) bool isCaptive;
@property (nonatomic) bool launchNewDraft;
@property (nonatomic) bool makeVisible;
@property (nonatomic) bool notifyOnUpload;

- (void).cxx_destruct;
- (id)answers;
- (id)description;
- (id)formId;
- (id)initWithDictionary:(id)arg1;
- (bool)isCaptive;
- (bool)launchNewDraft;
- (bool)makeVisible;
- (bool)notifyOnUpload;
- (void)setAnswers:(id)arg1;
- (void)setFormId:(id)arg1;
- (void)setIsCaptive:(bool)arg1;
- (void)setLaunchNewDraft:(bool)arg1;
- (void)setMakeVisible:(bool)arg1;
- (void)setNotifyOnUpload:(bool)arg1;

@end
