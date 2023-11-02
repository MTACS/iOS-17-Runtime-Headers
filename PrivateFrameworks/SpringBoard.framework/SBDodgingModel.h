
@interface SBDodgingModel : NSObject <NSMutableCopying> {
    NSMutableDictionary * _centersForIdentifiers;
    NSMutableArray * _identifiers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    NSMutableDictionary * _sizesForIdentifiers;
}

@property (nonatomic, retain) NSMutableDictionary *centersForIdentifiers;
@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (nonatomic, retain) NSMutableDictionary *sizesForIdentifiers;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })centerForIdentifier:(id)arg1;
- (id)centersForIdentifiers;
- (id)description;
- (id)identifiers;
- (id)initWithReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)modelByModifyingModelWithBlock:(id /* block */)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (void)setCentersForIdentifiers:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSizesForIdentifiers:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForIdentifier:(id)arg1;
- (id)sizesForIdentifiers;

@end
