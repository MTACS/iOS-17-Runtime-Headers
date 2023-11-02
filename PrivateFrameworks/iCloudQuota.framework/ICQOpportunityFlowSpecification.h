
@interface ICQOpportunityFlowSpecification : NSObject {
    NSArray * _actions;
    _ICQOpportunityBubbleImageDetails * _imageDetails;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) _ICQOpportunityBubbleImageDetails *imageDetails;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actions;
- (id)imageDetails;
- (id)initWithServerDictionary:(id)arg1;
- (void)makeActionsFromServerDict:(id)arg1;
- (void)makeMessageFromServerDict:(id)arg1;
- (id)message;
- (void)setActions:(id)arg1;
- (void)setImageDetails:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
