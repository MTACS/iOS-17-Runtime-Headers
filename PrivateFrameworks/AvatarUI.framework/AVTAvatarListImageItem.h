
@interface AVTAvatarListImageItem : NSObject <AVTAvatarListItem> {
    UIImage * _image;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)downcastWithRecordHandler:(id /* block */)arg1 imageHandler:(id /* block */)arg2 viewHandler:(id /* block */)arg3;
- (void)downcastWithRecordHandler:(id /* block */)arg1 viewHandler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)image;
- (id)initWithImage:(id)arg1 title:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)title;

@end
