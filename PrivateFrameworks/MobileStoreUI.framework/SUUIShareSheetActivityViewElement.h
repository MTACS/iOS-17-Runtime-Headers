
@interface SUUIShareSheetActivityViewElement : SUUIViewElement {
    NSString * _activityType;
    NSURL * _contentSourceURL;
}

@property (nonatomic, readonly) SUUIURLViewElement *URL;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSURL *contentSourceURL;
@property (nonatomic, readonly) SUUIImageViewElement *image;
@property (nonatomic, readonly) SUUILabelViewElement *message;
@property (nonatomic, readonly) SUUILabelViewElement *title;

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
