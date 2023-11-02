
@interface ABPKTrackedObject : NSObject {
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
    NSString * _category;
    unsigned long long  _confidence;
    unsigned long long  _objectID;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) unsigned long long objectID;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)category;
- (unsigned long long)confidence;
- (id)initWithObjectID:(unsigned long long)arg1 category:(id)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 confidence:(unsigned long long)arg4;
- (unsigned long long)objectID;

@end
