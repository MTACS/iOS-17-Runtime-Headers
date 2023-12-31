
@interface OADMovie : OCDDelayedMedia {
    bool  loop;
    NSData * mData;
    float  mEnd;
    bool  mIsAudioOnly;
    NSString * mName;
    float  mStart;
}

@property (retain) NSData *data;
@property bool isAudioOnly;
@property bool loop;
@property float movieEndPoint;
@property float movieStartPoint;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (bool)isAudioOnly;
- (bool)loop;
- (float)movieEndPoint;
- (float)movieStartPoint;
- (id)name;
- (void)setData:(id)arg1;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setLoop:(bool)arg1;
- (void)setMovieEndPoint:(float)arg1;
- (void)setMovieStartPoint:(float)arg1;
- (void)setName:(id)arg1;

@end
