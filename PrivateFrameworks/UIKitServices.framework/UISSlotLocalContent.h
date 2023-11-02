
@interface UISSlotLocalContent : NSObject <UISSlotAnyContent> {
    unsigned char  _contentScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGImage { } * _localImage;
}

@property (nonatomic, readonly) unsigned char contentScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly) bool shouldReplaceExistingContent;
@property (readonly) Class superclass;

+ (id)contentWithDrawing:(id)arg1 scale:(unsigned char)arg2 range:(unsigned long long)arg3;
+ (id)contentWithDrawing:(id)arg1 style:(id)arg2;
+ (id)contentWithImage:(struct CGImage { }*)arg1 scale:(unsigned char)arg2;

- (unsigned char)contentScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)deleteFromLayerContext:(id)arg1;
- (id)image;
- (id)initWithDrawing:(id)arg1 scale:(unsigned char)arg2 range:(unsigned long long)arg3;
- (id)initWithImage:(struct CGImage { }*)arg1 scale:(unsigned char)arg2;
- (bool)isRemote;
- (bool)shouldReplaceExistingContent;

@end
