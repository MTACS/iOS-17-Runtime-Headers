
@interface ANSTObject : NSObject <NSSecureCoding> {
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
    unsigned long long  _groupID;
    unsigned long long  _objectID;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) unsigned long long groupID;
@property (nonatomic, readonly) unsigned long long objectID;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)category;
- (unsigned long long)confidence;
- (id)debugJSONDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)groupID;
- (id)init;
- (id)initWithAcObject:(struct { unsigned int x1; unsigned int x2; int x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(unsigned long long)arg1 groupID:(unsigned long long)arg2 category:(id)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 confidence:(unsigned long long)arg5;
- (unsigned long long)objectID;

@end
