
@interface PKPayLaterImageRow : NSObject <PKPayLaterCollectionViewRow> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentEdgeInsets;
    UIImage * _image;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setContentEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
