
@interface WFContentItemChangeTransaction : NSObject {
    WFContentItem * _contentItem;
    NSString * _mode;
}

@property (nonatomic, readonly) WFContentItem *contentItem;
@property (nonatomic, copy) NSString *mode;

- (void).cxx_destruct;
- (id)contentItem;
- (id)initWithContentItem:(id)arg1;
- (id)mode;
- (void)saveWithCompletionHandler:(id /* block */)arg1 isNew:(bool)arg2;
- (void)setMode:(id)arg1;

@end
