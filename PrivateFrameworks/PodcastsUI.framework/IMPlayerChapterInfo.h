
@interface IMPlayerChapterInfo : NSObject {
    UIImage * _artwork;
    NSData * _artworkData;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _assetTimeRange;
    double  _duration;
    NSURL * _externalURL;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _mediaTimeRange;
    int  _metadataType;
    double  _time;
    NSString * _title;
    int  _type;
}

@property (nonatomic, readonly) UIImage *artwork;
@property (nonatomic, retain) NSData *artworkData;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } assetTimeRange;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSURL *externalURL;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaTimeRange;
@property (nonatomic) int metadataType;
@property (nonatomic) double time;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkData;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })assetTimeRange;
- (id)description;
- (double)duration;
- (id)externalURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaTimeRange;
- (int)metadataType;
- (void)setArtworkData:(id)arg1;
- (void)setAssetTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setDuration:(double)arg1;
- (void)setExternalURL:(id)arg1;
- (void)setMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setMetadataType:(int)arg1;
- (void)setTime:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (double)time;
- (id)title;
- (int)type;

@end
