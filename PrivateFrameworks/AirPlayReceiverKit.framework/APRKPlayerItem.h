
@interface APRKPlayerItem : AVPlayerItem {
    NSString * _UUIDString;
    long long  _actionAtItemEnd;
    NSURL * _contentLocation;
    bool  _expectsSecureStop;
    bool  _isAudioOnly;
    NSArray * _outOfBandAlternateTracks;
    NSDate * _startDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startPosition;
}

@property (nonatomic, copy) NSString *UUIDString;
@property (nonatomic) long long actionAtItemEnd;
@property (nonatomic, readonly) bool expectsSecureStop;
@property (nonatomic) bool isAudioOnly;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startPosition;

+ (id)UUIDFromItemDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDOnlyDictionaryRepresentation;
- (id)UUIDString;
- (long long)actionAtItemEnd;
- (id)description;
- (bool)enabledStateForTrackWithID:(int)arg1;
- (bool)expectsSecureStop;
- (id)initWithDictionary:(id)arg1 resourceLoaderHelper:(id)arg2 contentKeyHelper:(id)arg3 options:(id)arg4;
- (bool)isAudioOnly;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)outOfBandAlternateTracks;
- (id)playbackAccessLog;
- (id)playbackErrorLog;
- (id)selectedMediaArray;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setEnabledState:(bool)arg1 forTrackWithID:(int)arg2;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartPosition:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTextStyleRulesUsingArray:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (id)startDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startPosition;

@end
