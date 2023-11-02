
@interface AVChapter : NSObject <NSCopying> {
    struct CGImage { } * _cgImage;
    double  _duration;
    id /* block */  _imageBlock;
    unsigned long long  _number;
    double  _startTime;
    NSString * _title;
}

@property (nonatomic) struct CGImage { }*cgImage;
@property (readonly) double duration;
@property (readonly) UIImage *image;
@property (readonly) unsigned long long number;
@property (readonly) double startTime;
@property (readonly, copy) NSString *title;

+ (id)chapterAtTime:(double)arg1 inChapters:(id)arg2;
+ (void)initialize;
+ (id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (struct CGImage { }*)cgImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)duration;
- (unsigned long long)hash;
- (id)image;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(id /* block */)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)number;
- (void)setCGImage:(struct CGImage { }*)arg1;
- (void)setCgImage:(struct CGImage { }*)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (double)startTime;
- (id)title;
- (id)valueForUndefinedKey:(id)arg1;

@end
