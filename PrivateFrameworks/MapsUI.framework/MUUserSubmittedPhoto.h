
@interface MUUserSubmittedPhoto : NSObject <MUPhotoTileViewModel> {
    NSString * _photoID;
    NSURL * _photoURL;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *photoID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)configureWithSize:(struct CGSize { double x1; double x2; })arg1 imageProvider:(id /* block */)arg2;
- (id)initWithPhotoURL:(id)arg1;
- (id)photoID;
- (void)setPhotoID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
