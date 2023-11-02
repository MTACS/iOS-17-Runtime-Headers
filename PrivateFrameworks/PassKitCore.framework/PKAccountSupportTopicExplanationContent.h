
@interface PKAccountSupportTopicExplanationContent : NSObject {
    NSString * _subtitle;
    NSString * _systemImageName;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)subtitle;
- (id)systemImageName;
- (id)title;

@end
