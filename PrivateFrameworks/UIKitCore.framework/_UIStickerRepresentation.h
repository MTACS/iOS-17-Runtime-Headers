
@interface _UIStickerRepresentation : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _role;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _type;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *role;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createPNGDataFromHEICData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)role;
- (void)setData:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)type;

@end
