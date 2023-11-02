
@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UUID;
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSString * _hapticLibraryKey;
    NSData * _itemData;
    NSURL * _itemURL;
    long long  _numberOfLoops;
    NSDictionary * _userInfo;
    float  _volume;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;
@property (nonatomic, readonly, copy) NSString *hapticLibraryKey;
@property (nonatomic, readonly, copy) NSData *itemData;
@property (nonatomic, readonly, copy) NSURL *itemURL;
@property (nonatomic, readonly) long long numberOfLoops;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) float volume;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)hapticLibraryKey;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemURL:(id)arg1 itemData:(id)arg2 numberOfLoops:(long long)arg3 volume:(float)arg4 fadeInDuration:(double)arg5 fadeOutDuration:(double)arg6 userInfo:(id)arg7 hapticLibraryKey:(id)arg8 UUID:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)itemData;
- (id)itemURL;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)numberOfLoops;
- (id)userInfo;
- (float)volume;

@end
