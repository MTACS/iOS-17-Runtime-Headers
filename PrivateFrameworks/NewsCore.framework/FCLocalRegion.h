
@interface FCLocalRegion : NSObject {
    NSMutableSet * _areas;
    NSArray * _autoFavoriteTagIDs;
    NSString * _identifier;
    NSArray * _localVersionedTagIDs;
    NSString * _name;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (nonatomic, retain) NSMutableSet *areas;
@property (nonatomic, readonly) NSArray *autoFavoriteTagIDs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *localVersionedTagIDs;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;

- (void).cxx_destruct;
- (void)addLocalArea:(id)arg1;
- (id)areas;
- (id)autoFavoriteTagIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localVersionedTagIDs;
- (id)name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForEntireRegion;
- (void)setAreas:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
