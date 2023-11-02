
@interface TIStickerRepresentation : NSObject <NSSecureCoding> {
    NSData * _data;
    long long  _effect;
    NSString * _role;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UTType * _uti;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) long long effect;
@property (nonatomic, retain) NSString *role;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) UTType *uti;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (long long)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 uti:(id)arg2 role:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 effect:(long long)arg5;
- (id)role;
- (void)setData:(id)arg1;
- (void)setEffect:(long long)arg1;
- (void)setRole:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUti:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uti;

@end
