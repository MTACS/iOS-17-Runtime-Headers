
@interface HUPersonFaceCropTableCell : UITableViewCell <HUCellProtocol> {
    NSArray * _constraints;
    UIImageView * _faceCropView;
    UIImage * _faceImage;
    HFItem * _item;
    HMFaceCrop * _personFaceCrop;
}

@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImageView *faceCropView;
@property (nonatomic, retain) UIImage *faceImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HMFaceCrop *personFaceCrop;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)constraints;
- (id)faceCropView;
- (id)faceImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (id)personFaceCrop;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setFaceCropView:(id)arg1;
- (void)setFaceImage:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setPersonFaceCrop:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
