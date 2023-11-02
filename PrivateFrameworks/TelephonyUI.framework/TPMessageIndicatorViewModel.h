
@interface TPMessageIndicatorViewModel : NSObject <NSCopying> {
    double  _duration;
    TUHandle * _fromHandle;
    NSString * _identifier;
    bool  _isRead;
    bool  _isSensitive;
    bool  _isVideo;
    NSURL * _mediaURL;
    NSURL * _thumbnailURL;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) TUHandle *fromHandle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } indicatorImageSize;
@property (nonatomic, readonly) bool isRead;
@property (nonatomic, readonly) bool isSensitive;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) NSURL *mediaURL;
@property (nonatomic, readonly) NSUUID *messageUUID;
@property (nonatomic, readonly) NSURL *thumbnailURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (id)fromHandle;
- (id)identifier;
- (struct CGSize { double x1; double x2; })indicatorImageSize;
- (id)indicatorImageWithDefaultTintColor:(id)arg1;
- (id)init;
- (id)initWithDuration:(double)arg1 identifier:(id)arg2 mediaURL:(id)arg3 thumbnailURL:(id)arg4 isRead:(bool)arg5 isSensitive:(bool)arg6 isVideo:(bool)arg7 fromHandle:(id)arg8;
- (id)initWithIdentifier:(id)arg1;
- (bool)isRead;
- (bool)isSensitive;
- (bool)isVideo;
- (id)mediaURL;
- (id)messageUUID;
- (id)thumbnailURL;

@end
