
@interface PKAccountSupportTopicExplanation : NSObject {
    PKAccountSupportTopicExplanationContent * _content;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    PKAccountSupportTopicExplanationLink * _link;
    NSString * _primaryActionTitle;
    NSString * _secondaryActionTitle;
}

@property (nonatomic, readonly) PKAccountSupportTopicExplanationContent *content;
@property (nonatomic, readonly, copy) NSString *headerSubtitle;
@property (nonatomic, readonly, copy) NSString *headerTitle;
@property (nonatomic, readonly) PKAccountSupportTopicExplanationLink *link;
@property (nonatomic, readonly, copy) NSString *primaryActionTitle;
@property (nonatomic, readonly, copy) NSString *secondaryActionTitle;

- (void).cxx_destruct;
- (id)content;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithDictionary:(id)arg1;
- (id)link;
- (id)primaryActionTitle;
- (id)secondaryActionTitle;

@end
