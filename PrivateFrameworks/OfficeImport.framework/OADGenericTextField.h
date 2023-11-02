
@interface OADGenericTextField : OADTextField {
    NSString * _guid;
    NSString * _type;
}

@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)guid;
- (id)initWithGuid:(id)arg1 type:(id)arg2;
- (bool)isSimilarToTextRun:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
