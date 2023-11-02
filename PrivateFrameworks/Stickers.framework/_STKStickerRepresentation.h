
@interface _STKStickerRepresentation : NSObject {
    void data;
    void effect;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void role;
    void size;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stickerIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uti;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _STKStickerEffect *effect;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSUUID *stickerIdentifier;
@property (nonatomic, readonly) UTType *uti;

+ (id)roles;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)effect;
- (id)identifier;
- (id)init;
- (id)role;
- (struct CGSize { double x1; double x2; })size;
- (id)stickerIdentifier;
- (id)uti;

@end
