
@interface DOCTagSymbolImageConfiguration : NSObject {
    UIColor * _color;
    bool  _differentiateWithShapes;
    DOCTag * _tag;
    unsigned long long  _variant;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) bool differentiateWithShapes;
@property (nonatomic, readonly) DOCTag *tag;
@property (nonatomic, readonly) unsigned long long variant;

- (void).cxx_destruct;
- (id)color;
- (bool)differentiateWithShapes;
- (id)initWithTag:(id)arg1 color:(id)arg2 variant:(unsigned long long)arg3 differentiateWithShapes:(bool)arg4;
- (id)loadedImageForSettings;
- (id)tag;
- (unsigned long long)variant;

@end
