
@interface RCPEventStream : NSObject <NSCopying> {
    RCPEventEnvironment * _environment;
    NSMutableArray * _rawEvents;
}

@property (nonatomic, retain) RCPEventEnvironment *environment;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic, readonly) NSMutableArray *rawEvents;

+ (id)eventStreamWithData:(id)arg1 error:(id*)arg2;
+ (id)eventStreamWithFileURL:(id)arg1 error:(id*)arg2;
+ (id)eventStreamWithStudyLogFileURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_addEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)emptyCopy;
- (void)enumerateEventsUsingBlock:(id /* block */)arg1;
- (id)environment;
- (id)events;
- (void)filterEventsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)rawEvents;
- (void)setEnvironment:(id)arg1;
- (void)setEvents:(id)arg1;
- (id)statistics;
- (id)streamByAddingEventsFromStream:(id)arg1 withDistance:(double)arg2;
- (id)timingStatistics;
- (void)transformDigitizerEventLocationsWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)trimmedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)writeToURL:(id)arg1;

@end
