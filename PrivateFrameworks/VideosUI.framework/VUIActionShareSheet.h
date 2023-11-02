
@interface VUIActionShareSheet : VUIAction {
    NSDictionary * _groupActivityMetadata;
    NSString * _imageURLStr;
    NSString * _sharedWatchId;
    NSURL * _sharedWatchUrl;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    NSString * _subtitle;
    NSString * _title;
    NSString * _urlString;
}

@property (nonatomic, retain) NSDictionary *groupActivityMetadata;
@property (nonatomic, retain) NSString *imageURLStr;
@property (nonatomic, retain) NSString *sharedWatchId;
@property (nonatomic, retain) NSURL *sharedWatchUrl;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *urlString;

- (void).cxx_destruct;
- (id)groupActivityMetadata;
- (id)imageURLStr;
- (id)initWithContextData:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithContextData:(id)arg1 sourceView:(id)arg2;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setGroupActivityMetadata:(id)arg1;
- (void)setImageURLStr:(id)arg1;
- (void)setSharedWatchId:(id)arg1;
- (void)setSharedWatchUrl:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)sharedWatchId;
- (id)sharedWatchUrl;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)subtitle;
- (id)title;
- (id)urlString;

@end
