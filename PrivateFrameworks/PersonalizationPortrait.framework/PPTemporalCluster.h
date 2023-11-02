
@interface PPTemporalCluster : NSObject <NSSecureCoding> {
    NSArray * _contactHandles;
    NSArray * _contacts;
    NSDate * _endDate;
    NSArray * _entities;
    PPEvent * _event;
    NSArray * _locations;
    NSArray * _mediaItems;
    double  _score;
    NSDate * _startDate;
    NSArray * _topics;
}

@property (nonatomic, readonly) NSArray *contactHandles;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *entities;
@property (nonatomic, readonly) PPEvent *event;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSArray *mediaItems;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *topics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactHandles;
- (id)contacts;
- (id)description;
- (id)descriptionDateFormatter;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)entities;
- (id)event;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 score:(double)arg4 topics:(id)arg5 entities:(id)arg6 locations:(id)arg7 contacts:(id)arg8 contactHandles:(id)arg9 mediaItems:(id)arg10;
- (id)locations;
- (id)longDescription;
- (id)mediaItems;
- (double)score;
- (id)startDate;
- (id)topics;

@end
