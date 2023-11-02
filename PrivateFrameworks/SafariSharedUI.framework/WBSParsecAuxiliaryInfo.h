
@interface WBSParsecAuxiliaryInfo : WBSParsecModel {
    NSString * _bottomText;
    NSString * _bottomTextColor;
    NSString * _middleText;
    NSString * _topText;
}

@property (nonatomic, readonly, copy) NSString *bottomText;
@property (nonatomic, readonly, copy) NSString *bottomTextColor;
@property (nonatomic, readonly, copy) NSString *middleText;
@property (nonatomic, readonly, copy) NSString *topText;

+ (id)schema;

- (void).cxx_destruct;
- (id)bottomText;
- (id)bottomTextColor;
- (id)initWithDictionary:(id)arg1;
- (id)middleText;
- (id)topText;

@end
