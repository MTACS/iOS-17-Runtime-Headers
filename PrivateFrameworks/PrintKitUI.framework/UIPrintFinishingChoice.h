
@interface UIPrintFinishingChoice : NSObject {
    long long  _finishingChoiceID;
    NSDictionary * _finishingChoiceInfo;
    NSString * _title;
}

@property (nonatomic) long long finishingChoiceID;
@property (nonatomic, retain) NSDictionary *finishingChoiceInfo;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (long long)finishingChoiceID;
- (id)finishingChoiceInfo;
- (id)initWithTitle:(id)arg1 finishingChoiceID:(long long)arg2 finishingChoiceInfo:(id)arg3;
- (void)setFinishingChoiceID:(long long)arg1;
- (void)setFinishingChoiceInfo:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
