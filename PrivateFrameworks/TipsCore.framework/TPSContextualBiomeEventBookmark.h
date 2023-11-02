
@interface TPSContextualBiomeEventBookmark : TPSContextualEventBookmark {
    <BMBookmark> * _sinkBookmark;
}

@property (nonatomic, retain) <BMBookmark> *sinkBookmark;

+ (id)bookmarkWithSinkBookmark:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSinkBookmark:(id)arg1;
- (id)sinkBookmark;

@end
