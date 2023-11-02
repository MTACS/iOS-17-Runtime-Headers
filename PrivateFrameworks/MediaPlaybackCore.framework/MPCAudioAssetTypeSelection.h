
@interface MPCAudioAssetTypeSelection : NSObject {
    NSString * _explanation;
    NSDictionary * _justification;
    long long  _type;
}

@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, copy) NSDictionary *justification;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)explanation;
- (id)justification;
- (void)setExplanation:(id)arg1;
- (void)setJustification:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
