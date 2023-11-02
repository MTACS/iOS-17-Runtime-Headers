
@interface SMMusicTrack : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  musicTrack;
}

@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (double)duration;
- (id)identifier;
- (id)init;
- (double)startTime;
- (id)title;

@end
