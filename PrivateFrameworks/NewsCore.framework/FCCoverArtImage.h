
@interface FCCoverArtImage : NSObject {
    NSURL * _URL;
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensions;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } dimensions;

- (void).cxx_destruct;
- (id)URL;
- (struct CGSize { double x1; double x2; })dimensions;
- (id)initWithDimensions:(struct CGSize { double x1; double x2; })arg1 URL:(id)arg2;

@end
