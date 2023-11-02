
@interface SLDEmptySlotContent : NSObject <UISSlotAnyContent> {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _isRemote;
    UISSlotStyle * _style;
}

@property (nonatomic, readonly) unsigned char contentScale;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRemote;
@property (nonatomic, readonly) bool shouldReplaceExistingContent;
@property (nonatomic, retain) UISSlotStyle *style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned char)contentScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)deleteFromLayerContext:(id)arg1;
- (id)image;
- (id)initWithStyle:(id)arg1 forRemote:(bool)arg2;
- (bool)isRemote;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsRemote:(bool)arg1;
- (void)setStyle:(id)arg1;
- (bool)shouldReplaceExistingContent;
- (id)style;

@end
