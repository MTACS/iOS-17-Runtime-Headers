
@interface PKExternalElement : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    id  _identifier;
    struct CGPath { } * _path;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) struct CGPath { }*path;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (void)dealloc;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 path:(struct CGPath { }*)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)path;

@end
