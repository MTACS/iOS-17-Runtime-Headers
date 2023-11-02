
@interface SVXUserFeedbackAudioContent : NSObject <NSCopying, NSSecureCoding> {
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSURL * _itemURL;
    unsigned long long  _numberOfLoops;
}

@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;
@property (nonatomic, readonly, copy) NSURL *itemURL;
@property (nonatomic, readonly) unsigned long long numberOfLoops;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemURL:(id)arg1 numberOfLoops:(unsigned long long)arg2 fadeInDuration:(double)arg3 fadeOutDuration:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)itemURL;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)numberOfLoops;

@end
