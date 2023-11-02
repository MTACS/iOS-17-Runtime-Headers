
@interface PassWrapper : NSObject {
    PKPass * _pass;
}

@property (nonatomic, retain) PKPass *pass;

- (void).cxx_destruct;
- (id)croppedImageToAlignmentRectInsets:(id)arg1;
- (id)getPassImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)getPassName;
- (id)initWithUniquePassID:(id)arg1;
- (id)pass;
- (void)setPass:(id)arg1;

@end
