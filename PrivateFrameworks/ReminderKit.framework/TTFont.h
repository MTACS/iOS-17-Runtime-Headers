
@interface TTFont : NSObject <NSSecureCoding> {
    unsigned int  _fontHints;
    NSString * _fontName;
    id  _nativeFont;
    double  _pointSize;
}

@property (nonatomic, readonly) unsigned int fontHints;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, retain) id nativeFont;
@property (nonatomic, readonly) double pointSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fontHints;
- (id)fontName;
- (unsigned long long)hash;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (id)nativeFont;
- (double)pointSize;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (void)setNativeFont:(id)arg1;

@end
