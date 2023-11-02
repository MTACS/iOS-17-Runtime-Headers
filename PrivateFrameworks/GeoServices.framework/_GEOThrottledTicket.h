
@interface _GEOThrottledTicket : NSObject {
    unsigned int  qos;
    double  safeTime;
    id /* block */  submissionHandler;
    <GEOMapServiceThrottlableTicket> * ticket;
}

@property (nonatomic) unsigned int qos;
@property (nonatomic) double safeTime;
@property (nonatomic, copy) id /* block */ submissionHandler;
@property (nonatomic, retain) <GEOMapServiceThrottlableTicket> *ticket;

+ (id)ticket:(id)arg1 withHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (unsigned int)qos;
- (double)safeTime;
- (void)setQos:(unsigned int)arg1;
- (void)setSafeTime:(double)arg1;
- (void)setSubmissionHandler:(id /* block */)arg1;
- (void)setTicket:(id)arg1;
- (id /* block */)submissionHandler;
- (id)ticket;

@end
