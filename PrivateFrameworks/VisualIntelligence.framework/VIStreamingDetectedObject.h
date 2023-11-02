
@interface VIStreamingDetectedObject : NSObject {
    NSString * _displayLabel;
    NSString * _domainKey;
    NSString * _glyphName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedBoundingBox;
    NSUUID * _objectUUID;
}

@property (nonatomic, readonly, copy) NSString *displayLabel;
@property (nonatomic, readonly, copy) NSString *domainKey;
@property (nonatomic, readonly, copy) NSString *glyphName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingBox;
@property (nonatomic, readonly, copy) NSUUID *objectUUID;

- (void).cxx_destruct;
- (id)displayLabel;
- (id)domainKey;
- (id)glyphName;
- (id)initWithObjectUUID:(id)arg1 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 domainKey:(id)arg3 glyphName:(id)arg4 displayLabel:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingBox;
- (id)objectUUID;

@end
