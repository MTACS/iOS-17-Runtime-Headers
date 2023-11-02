
@interface _STKStickerUIStickerRepresentation : NSObject {
    void data;
    void role;
    void size;
    void type;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1 type:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 role:(id)arg4;
- (id)role;
- (struct CGSize { double x1; double x2; })size;
- (id)type;

@end
