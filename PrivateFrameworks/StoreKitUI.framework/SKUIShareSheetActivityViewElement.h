
@interface SKUIShareSheetActivityViewElement : SKUIViewElement {
    NSString * _activityType;
    NSURL * _contentSourceURL;
}

@property (nonatomic, readonly) SKUIURLViewElement *URL;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSURL *contentSourceURL;
@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) SKUILabelViewElement *message;
@property (nonatomic, readonly) SKUILabelViewElement *title;

- (void).cxx_destruct;
- (id)URL;
- (id)activityType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)contentSourceURL;
- (id)image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)message;
- (id)title;

@end
