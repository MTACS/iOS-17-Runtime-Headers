
@interface MUWebContentTraits : NSObject {
    bool  _nativelyDrawingPlatter;
    bool  _vibrant;
}

@property (getter=isNativelyDrawingPlatter, nonatomic) bool nativelyDrawingPlatter;
@property (getter=isVibrant, nonatomic) bool vibrant;

- (bool)isNativelyDrawingPlatter;
- (bool)isVibrant;
- (id)queryItems;
- (void)setNativelyDrawingPlatter:(bool)arg1;
- (void)setVibrant:(bool)arg1;

@end
