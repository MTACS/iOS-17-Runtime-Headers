
@interface BLTImageAttachmentInfo : NSObject {
    NSString * _contentType;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSString *contentType;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)imageAttachmentInfoForImageURL:(id)arg1;

- (void).cxx_destruct;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
