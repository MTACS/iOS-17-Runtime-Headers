
@interface GEOLunarEvent : NSObject {
    double  _altitude;
    double  _bearing;
    NSDate * _date;
    bool  _isAboveHorizon;
    long long  _type;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double bearing;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool isAboveHorizon;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (double)altitude;
- (double)bearing;
- (id)date;
- (bool)isAboveHorizon;
- (long long)type;

@end
