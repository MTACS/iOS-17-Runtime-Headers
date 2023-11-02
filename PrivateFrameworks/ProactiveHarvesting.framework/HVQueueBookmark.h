
@interface HVQueueBookmark : NSObject {
    <BMBookmark> * _futureBookmark;
    NSNumber * _futureCutoff;
    unsigned char  _los;
    <BMBookmark> * _pastBookmark;
}

@property (nonatomic, retain) <BMBookmark> *futureBookmark;
@property (nonatomic, copy) NSNumber *futureCutoff;
@property (nonatomic) unsigned char los;
@property (nonatomic, retain) <BMBookmark> *pastBookmark;

- (void).cxx_destruct;
- (id)futureBookmark;
- (id)futureCutoff;
- (id)jsonDict;
- (unsigned char)los;
- (id)pastBookmark;
- (void)reset;
- (void)setFutureBookmark:(id)arg1;
- (void)setFutureCutoff:(id)arg1;
- (void)setLos:(unsigned char)arg1;
- (void)setPastBookmark:(id)arg1;

@end
