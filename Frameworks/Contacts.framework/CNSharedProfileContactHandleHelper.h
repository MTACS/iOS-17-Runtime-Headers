
@interface CNSharedProfileContactHandleHelper : NSObject {
    CNHandleStringClassifier * _classifier;
}

@property (nonatomic, retain) CNHandleStringClassifier *classifier;

+ (id)log;

- (void).cxx_destruct;
- (id)classifier;
- (bool)contact:(id)arg1 containsEmailHandleString:(id)arg2;
- (bool)contact:(id)arg1 containsHandleString:(id)arg2;
- (bool)contact:(id)arg1 containsPhoneHandleString:(id)arg2;
- (id)init;
- (id)initWithHandleStringClassifier:(id)arg1;
- (void)setClassifier:(id)arg1;

@end
