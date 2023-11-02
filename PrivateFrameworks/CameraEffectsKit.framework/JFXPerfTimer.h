
@interface JFXPerfTimer : NSObject {
    double  _end;
    double  _start;
}

- (double)elapsedTime;
- (double)elapsedTimeMS;
- (double)end;
- (id)init;
- (void)start;

@end
