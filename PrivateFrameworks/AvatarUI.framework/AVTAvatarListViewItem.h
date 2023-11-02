
@interface AVTAvatarListViewItem : NSObject <AVTAvatarListItem> {
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)downcastWithRecordHandler:(id /* block */)arg1 imageHandler:(id /* block */)arg2 viewHandler:(id /* block */)arg3;
- (void)downcastWithRecordHandler:(id /* block */)arg1 viewHandler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)initWithView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)view;

@end
